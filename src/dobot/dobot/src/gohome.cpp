#include "ros/ros.h"
#include "std_msgs/String.h"
#include "dobot/SetHOMEParams.h"
#include "dobot/GetHOMEParams.h"
#include "dobot/SetHOMECmd.h"

int main(int argc, char **argv)
{
ros::init(argc, argv, "DobotClient_gohome");
ros::NodeHandle n;
ros::ServiceClient client;
client = n.serviceClient<dobot::SetHOMECmd>("/DobotServer/SetHOMECmd");
dobot::SetHOMECmd srv;
 client.call(srv);
 if (client.call(srv) == false) {
ROS_ERROR("Failed to GOHOME");
return -1;
 }
 return 0;
 }