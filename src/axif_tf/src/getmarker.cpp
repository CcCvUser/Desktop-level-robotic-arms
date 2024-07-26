/**********************ROS****************************************/
#include <ros/ros.h>
//#include <axif_tf/getPoint.h>
#include <geometry_msgs/PointStamped.h>
#include <sensor_msgs/image_encodings.h>
#include <image_transport/image_transport.h>
#include <tf/transform_broadcaster.h>
#include <tf/transform_datatypes.h>
#include <tf_conversions/tf_eigen.h>
#include <tf/transform_listener.h>
/*********************EUGEN***************************************/
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>
#include <cmath>
/********************OPENCVLIBRARY********************************/
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/aruco.hpp>
#include <opencv2/aruco/dictionary.hpp>
#include <opencv2/core/eigen.hpp>
#include <cv_bridge/cv_bridge.h>
#include <iostream>
#include "opencv2/calib3d/calib3d.hpp" 
#include "opencv2/imgcodecs.hpp"
/**************************************计算过程中用到的变量
***************************************************/
using namespace std;
//手动输入标定好的相机内参
cv::Mat camera_matrix = (cv::Mat_<double>(3,3) << 901.9421014310618, 0, 245.2750194272815, 0, 898.8820756112393, 237.1305507341797, 0, 0, 1); //matrix_num2
//相机畸变参数
cv::Mat dist_coeffs =(cv::Mat_<double>(1,5) << 0.1835090059850011, 0.06398805084498689, -0.002133193521574664, -0.04082254053603857, 0); //matrix_num2
//Aruco 二维码的编码代号
cv::Ptr<cv::aruco::Dictionary> dictionary;
//二维码中心.即世界坐标系的中心点像素坐标
vector<cv::Point2f> marker_center;
double Zc = 1.0;//坐标变换因子(相机坐标系原点到世界坐标平面的距离 init)
ros::NodeHandle* n_p = NULL;
//世界坐标系下的坐标
/**********************************************TF 变量
******************************************************/
tf::TransformBroadcaster* pointer_marker_position_broadcaster;
/******************************CALLBACK_FUNCTION*********************/
void callbackImage(const sensor_msgs::ImageConstPtr& msg);
/**********************************FUNCTION**************************/
void loadCalibrationFiles(string& input_path, cv::Mat& camera_matrix, cv::Mat& distcoeffs, double
scale);
void getMarker(cv::Mat& marker_image, vector<cv::Point2f>& marker_center, bool key);
//得到世界坐标系的中心点,useless
//void getMarkerCoordinate(vector < vector<cv::Point2f> >& corners, vector<int>& ids, vector<cv::Point2f>& marker_center);
void sendMarkerTf(vector<cv::Vec3d>& marker_vecs, vector<cv::Vec3d>& marker_rvecs);
/********************************************************************/
/******************************主函数*********************************/
/********************************************************************/
int main(int argc, char** argv)
{
ros::init(argc, argv, "axif_tf");
ros::NodeHandle n;
n_p = &n;
tf::TransformBroadcaster marker_position_broadcaster;
pointer_marker_position_broadcaster = &marker_position_broadcaster; ////
image_transport::ImageTransport it_(n);
image_transport::Subscriber image_sub_= it_.subscribe("/usb_cam/image_raw",1,callbackImage);
//每秒接受 30 次回调函数
ros::Rate loop_rate(30);
while(ros::ok())
{
ros::spinOnce();
loop_rate.sleep();
}
}
//接受传来的图像,目的是为了检测二维码,并发布世界坐标系,相机坐标系,机器人坐标系,机器人末端坐标系的 tf 变换关系
void callbackImage(const sensor_msgs::ImageConstPtr& msg)
{
//cout<<"回调函数 2！"<<endl;
cv_bridge::CvImagePtr cv_ptr;
try
{
cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);//转化为opencv 格式图像，返回指针
}
catch (cv_bridge::Exception& e)
{
ROS_ERROR("cv_bridge exception: %s", e.what());
return;
}
//获取二维码信息,并发布坐标系之间的关系
getMarker(cv_ptr->image,marker_center,0);
cv::imshow("callbackImage",cv_ptr->image);
//cout<<result_1<<endl;
cv::waitKey(1);
}
void getMarker(cv::Mat& marker_image, vector<cv::Point2f>& marker_center, bool key)
{
//从而二维码中获取相机和二维码(世界坐标系)的变化关系
vector<int> ids;
vector< vector<cv::Point2f> > corners;
vector<cv::Vec3d> rvecs, tvecs;
dictionary = cv::aruco::getPredefinedDictionary(cv::aruco::DICT_6X6_100);//特别要注意
cv::Ptr<cv::aruco::DetectorParameters> parameters = cv::aruco::DetectorParameters::create();
parameters->minMarkerPerimeterRate = 0.03; // 调整最小标记周长比例
parameters->maxMarkerPerimeterRate = 4.0; // 调整最大标记周长比例
if(!marker_image.empty())
{
cv::aruco::detectMarkers(marker_image, dictionary, corners, ids);
//侦测到角点以备姿态检测使用
cv::aruco::drawDetectedMarkers(marker_image, corners, ids);
cv::aruco::estimatePoseSingleMarkers(corners, 0.086, camera_matrix, dist_coeffs, rvecs, tvecs);//0.086 marker 大小
if(rvecs.empty()&&tvecs.empty())
{
cout<<"no trans"<<endl;
}
else
{
cv::aruco::drawAxis(marker_image, camera_matrix, dist_coeffs ,rvecs, tvecs, 0.1); //画坐标轴
Zc=tvecs[0][2]-0.044;
cout<<"深度输出："<<Zc<<endl;
//sendMarkerTf(rvecs,tvecs); //发布 tf
}
}
}