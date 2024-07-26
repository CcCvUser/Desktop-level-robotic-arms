/**********************ROS**********************************/
#include <ros/ros.h>
#include <axif_tf/getPoint.h>
#include <geometry_msgs/PointStamped.h>
#include <sensor_msgs/image_encodings.h>
#include <image_transport/image_transport.h>
#include <tf/transform_broadcaster.h>
#include <tf/transform_datatypes.h>
#include <tf_conversions/tf_eigen.h>
#include <tf/transform_listener.h>
/*********************EUGEN*********************************/
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>
#include <cmath>
/********************OPENCVLIBRARY***************************/
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
/*******************PACKAGE_HEADER***************************/
#include <opencvtest/pixel_point0.h>
#include <dobot/GetPose.h>

using namespace std;

// 存储物块在机械臂基座坐标系下的中心坐标
axif_tf::getPoint msg10; // 橙色
axif_tf::getPoint msg_red; // 红色
axif_tf::getPoint msg_yellow; // 黄色
axif_tf::getPoint msg_green; 
axif_tf::getPoint msg_blue; 
axif_tf::getPoint msg_purple; 


// 计算橙色积木的相机坐标系下的坐标值
void callbackCalculateAxis1(axif_tf::getPoint::ConstPtr message);
// 计算红色积木的相机坐标系下的坐标值
void callbackCalculateAxisRed(axif_tf::getPoint::ConstPtr message);
// 计算黄色积木的相机坐标系下的坐标值
void callbackCalculateAxisYellow(axif_tf::getPoint::ConstPtr message);
void callbackCalculateAxisGreen(axif_tf::getPoint::ConstPtr message);
void callbackCalculateAxisBlue(axif_tf::getPoint::ConstPtr message);
void callbackCalculateAxisPurple(axif_tf::getPoint::ConstPtr message);

ros::NodeHandle* n_p = NULL;
ros::Publisher* pointer_result_10_pub = NULL; // 橙色
ros::Publisher* pointer_result_red_pub = NULL; // 红色
ros::Publisher* pointer_result_yellow_pub = NULL; // 黄色
ros::Publisher* pointer_result_green_pub = NULL; // 
ros::Publisher* pointer_result_blue_pub = NULL; // 
ros::Publisher* pointer_result_purple_pub = NULL; 

geometry_msgs::PointStamped result_in;
geometry_msgs::PointStamped result_out;
tf::TransformListener* listener_ptr;

int main(int argc, char** argv)
{
    ros::init(argc, argv, "transform_base");
    ros::NodeHandle n;
    n_p = &n;
    tf::TransformListener listener;
    listener_ptr = &listener;



    // 红色物块处理
    ros::Subscriber pixel_sub_red = n.subscribe("result_red", 100, callbackCalculateAxisRed);
    ros::Publisher result_red_pub = n.advertise<axif_tf::getPoint>("result_10", 1); // 发布相机坐标系下的红色物块中心坐标
    pointer_result_red_pub = &result_red_pub;

    // 橙色物块处理
    ros::Subscriber pixel_sub1 = n.subscribe("result_1", 100, callbackCalculateAxis1);
    ros::Publisher result_1_pub = n.advertise<axif_tf::getPoint>("result_20", 1); // 发布相机坐标系下的橙色物块中心坐标
    pointer_result_10_pub = &result_1_pub;

    // 黄色物块处理
    ros::Subscriber pixel_sub_yellow = n.subscribe("result_yellow", 100, callbackCalculateAxisYellow);
    ros::Publisher result_yellow_pub = n.advertise<axif_tf::getPoint>("result_30", 1); // 发布相机坐标系下的物块中心坐标
    pointer_result_yellow_pub = &result_yellow_pub;

     ros::Subscriber pixel_sub_green= n.subscribe("result_green", 100, callbackCalculateAxisGreen);
    ros::Publisher result_green_pub = n.advertise<axif_tf::getPoint>("result_40", 1); // 发布相机坐标系下的物块中心坐标
    pointer_result_green_pub = &result_green_pub;

     ros::Subscriber pixel_sub_blue = n.subscribe("result_blue", 100, callbackCalculateAxisBlue);
    ros::Publisher result_blue_pub = n.advertise<axif_tf::getPoint>("result_50", 1); // 发布相机坐标系下的物块中心坐标
    pointer_result_blue_pub = &result_blue_pub;

     ros::Subscriber pixel_sub_purple= n.subscribe("result_purple", 100, callbackCalculateAxisPurple);
    ros::Publisher result_purple_pub = n.advertise<axif_tf::getPoint>("result_60", 1); // 发布相机坐标系下的物块中心坐标
    pointer_result_purple_pub = &result_purple_pub;

    ros::Rate loop_rate(30);
    while (ros::ok())
    {
        ros::spinOnce();
        loop_rate.sleep();
    }
}

// 橙色物块处理
void callbackCalculateAxis1(axif_tf::getPoint::ConstPtr message)
{
    for (int i = 0; i < message->x1.size(); i++)
    {
        result_in.point.x = message->x1[i];
        result_in.point.y = message->x2[i];
        result_in.point.z = message->x3[i];
        result_in.header.frame_id = "logitech";
        result_out.header.frame_id = "dobot_base";
        try
        {
            listener_ptr->transformPoint("dobot_base", ros::Time(0), result_in, "logitech", result_out); // 相机坐标系到机械臂坐标系下的变换
        }
        catch (tf::TransformException &ex)
        {
            ROS_ERROR("%s", ex.what());
            ros::Duration(1.0).sleep();
            continue;
        }
        msg10.x1.push_back(result_out.point.x-0.01 ); // 单位为 m, 可加减调参
        msg10.x2.push_back(result_out.point.y-0.025); // 单位为 m, 可加减调参
        msg10.x3.push_back(-0.052); // 获得坐标Z
    }
    cout << "orange" << endl;
    cout << msg10 << endl;
    pointer_result_10_pub->publish(msg10); // 发布出来
    msg10.x1.clear();
    msg10.x2.clear();
    msg10.x3.clear();
}

// 红色物块处理
void callbackCalculateAxisRed(axif_tf::getPoint::ConstPtr message)
{
    for (int i = 0; i < message->x1.size(); i++)
    {
        result_in.point.x = message->x1[i];
        result_in.point.y = message->x2[i];
        result_in.point.z = message->x3[i];
        result_in.header.frame_id = "logitech";
        result_out.header.frame_id = "dobot_base";
        try
        {
            listener_ptr->transformPoint("dobot_base", ros::Time(0), result_in, "logitech", result_out); // 相机坐标系到机械臂坐标系下的变换
        }
        catch (tf::TransformException &ex)
        {
            ROS_ERROR("%s", ex.what());
            ros::Duration(1.0).sleep();
            continue;
        }
        msg_red.x1.push_back(result_out.point.x - 0.01); // 单位为 m, 可加减调参
        msg_red.x2.push_back(result_out.point.y-0.025); // 单位为 m, 可加减调参
        msg_red.x3.push_back(-0.052); // 获得坐标Z
    }
    cout << "red" << endl;
    cout << msg_red << endl;
    pointer_result_red_pub->publish(msg_red); // 发布出来
    msg_red.x1.clear();
    msg_red.x2.clear();
    msg_red.x3.clear();
}

// 黄色物块处理
void callbackCalculateAxisYellow(axif_tf::getPoint::ConstPtr message)
{
    for (int i = 0; i < message->x1.size(); i++)
    {
        result_in.point.x = message->x1[i];
        result_in.point.y = message->x2[i];
        result_in.point.z = message->x3[i];
        result_in.header.frame_id = "logitech";
        result_out.header.frame_id = "dobot_base";
        try
        {
            listener_ptr->transformPoint("dobot_base", ros::Time(0), result_in, "logitech", result_out); // 相机坐标系到机械臂坐标系下的变换
        }
        catch (tf::TransformException &ex)
        {
            ROS_ERROR("%s", ex.what());
            ros::Duration(1.0).sleep();
            continue;
        }
        msg_yellow.x1.push_back(result_out.point.x - 0.01); // 单位为 m, 可加减调参
        msg_yellow.x2.push_back(result_out.point.y-0.025); // 单位为 m, 可加减调参
        msg_yellow.x3.push_back(-0.052); // 获得坐标Z
    }
    cout << "yellow" << endl;
    cout << msg_yellow << endl;
    pointer_result_yellow_pub->publish(msg_yellow); // 发布出来
    msg_yellow.x1.clear();
    msg_yellow.x2.clear();
    msg_yellow.x3.clear();
}

void callbackCalculateAxisGreen(axif_tf::getPoint::ConstPtr message)
{
    for (int i = 0; i < message->x1.size(); i++)
    {
        result_in.point.x = message->x1[i];
        result_in.point.y = message->x2[i];
        result_in.point.z = message->x3[i];
        result_in.header.frame_id = "logitech";
        result_out.header.frame_id = "dobot_base";
        try
        {
            listener_ptr->transformPoint("dobot_base", ros::Time(0), result_in, "logitech", result_out); // 相机坐标系到机械臂坐标系下的变换
        }
        catch (tf::TransformException &ex)
        {
            ROS_ERROR("%s", ex.what());
            ros::Duration(1.0).sleep();
            continue;
        }
        msg_green.x1.push_back(result_out.point.x - 0.01); // 单位为 m, 可加减调参
        msg_green.x2.push_back(result_out.point.y-0.025); // 单位为 m, 可加减调参
        msg_green.x3.push_back(-0.052); // 获得坐标Z
    }
    cout << "green" << endl;
    cout << msg_green<< endl;
    pointer_result_green_pub->publish(msg_green); // 发布出来
    msg_green.x1.clear();
    msg_green.x2.clear();
    msg_green.x3.clear();
}

void callbackCalculateAxisBlue(axif_tf::getPoint::ConstPtr message)
{
    for (int i = 0; i < message->x1.size(); i++)
    {
        result_in.point.x = message->x1[i];
        result_in.point.y = message->x2[i];
        result_in.point.z = message->x3[i];
        result_in.header.frame_id = "logitech";
        result_out.header.frame_id = "dobot_base";
        try
        {
            listener_ptr->transformPoint("dobot_base", ros::Time(0), result_in, "logitech", result_out); // 相机坐标系到机械臂坐标系下的变换
        }
        catch (tf::TransformException &ex)
        {
            ROS_ERROR("%s", ex.what());
            ros::Duration(1.0).sleep();
            continue;
        }
        msg_blue.x1.push_back(result_out.point.x - 0.01); // 单位为 m, 可加减调参
        msg_blue.x2.push_back(result_out.point.y-0.025); // 单位为 m, 可加减调参
        msg_blue.x3.push_back(-0.052); // 获得坐标Z
    }
    cout << "blue" << endl;
    cout << msg_blue << endl;
    pointer_result_blue_pub->publish(msg_blue); // 发布出来
    msg_blue.x1.clear();
    msg_blue.x2.clear();
    msg_blue.x3.clear();
}

void callbackCalculateAxisPurple(axif_tf::getPoint::ConstPtr message)
{
    for (int i = 0; i < message->x1.size(); i++)
    {
        result_in.point.x = message->x1[i];
        result_in.point.y = message->x2[i];
        result_in.point.z = message->x3[i];
        result_in.header.frame_id = "logitech";
        result_out.header.frame_id = "dobot_base";
        try
        {
            listener_ptr->transformPoint("dobot_base", ros::Time(0), result_in, "logitech", result_out); // 相机坐标系到机械臂坐标系下的变换
        }
        catch (tf::TransformException &ex)
        {
            ROS_ERROR("%s", ex.what());
            ros::Duration(1.0).sleep();
            continue;
        }
        msg_purple.x1.push_back(result_out.point.x - 0.01); // 单位为 m, 可加减调参
        msg_purple.x2.push_back(result_out.point.y-0.025); // 单位为 m, 可加减调参
        msg_purple.x3.push_back(-0.052); // 获得坐标Z
    }
    cout << "purple" << endl;
    cout << msg_purple<< endl;
    pointer_result_purple_pub->publish(msg_purple); // 发布出来
    msg_purple.x1.clear();
    msg_purple.x2.clear();
    msg_purple.x3.clear();
}