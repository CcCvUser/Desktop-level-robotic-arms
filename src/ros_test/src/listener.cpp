#include <iostream>
#include "ros/ros.h"
#include "std_msgs/String.h"
void chatterCallBack(const std_msgs::String::ConstPtr &msg){
    ROS_INFO("I get: [%s}",msg->data.c_str());}

int main(int argc, char **argv){
    //ros节点初始化 "listener"节点名称，在 ROS里同一时间不允许出
    ros::init(argc,argv,"listener");
    //创建节点句柄
    ros::NodeHandle h;
    //创建一个 subscriber, topic:chatter,消息类型 std_msgs::String,接收到消息，响应 chatterCallBack
    ros::Subscriber listener_sub=h.subscribe<std_msgs::String>("chatter",1000,chatterCallBack);
    //循环等待回调函数
    ros::spin();
    return 0;}