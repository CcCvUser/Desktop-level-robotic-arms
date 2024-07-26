#include<iostream>
#include"ros/ros.h"
#include"std_msgs/String.h"
int main(int argc,char **argv){
    //ros节点初始化 "talker"节点名称，在 ROS里同一时间不允许出现两个 
    ros::init(argc,argv,"talker");
    //创建节点句柄
    ros::NodeHandle h;
    //创建一个 publisher, topic:chatter,消息类型 std_msgs::String
    ros::Publisher chatter_pub = h.advertise<std_msgs::String>("chatter",1000);
    // "chatter"话题名称,消息缓存
    //设置单循环的频率
    ros::Rate looprate(10);

   while (ros::ok())
   {
    std_msgs::String msg;
    std::stringstream ss;
    ss<<"hello world";
    msg.data = ss.str();
    //发布消息
    ROS_INFO("%s",msg.data.c_str());
    chatter_pub.publish(msg);
    //等待回调函数
    ros::spinOnce();
    //按照之前设定的进行循环
    looprate.sleep();
   }
}