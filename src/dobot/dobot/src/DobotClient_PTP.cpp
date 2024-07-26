#include "ros/ros.h"
#include "std_msgs/String.h"
#include "dobot/SetCmdTimeout.h"
#include "dobot/SetQueuedCmdClear.h"
#include "dobot/SetQueuedCmdStartExec.h"
#include "dobot/SetQueuedCmdForceStopExec.h"
#include "dobot/GetDeviceVersion.h"
#include <geometry_msgs/PointStamped.h>
#include "dobot/SetEndEffectorParams.h"
#include "dobot/SetPTPJointParams.h"
#include "dobot/SetPTPCoordinateParams.h"
#include "dobot/SetPTPJumpParams.h"
#include "dobot/SetPTPCommonParams.h"
#include "dobot/SetPTPCmd.h"
#include "dobot/SetHOMEParams.h"
#include "dobot/GetHOMEParams.h"
#include "dobot/SetHOMECmd.h"
#include "axif_tf/getPoint.h"
#include "dobot/SetEndEffectorParams.h"
#include "dobot/GetEndEffectorParams.h"
#include "dobot/SetEndEffectorLaser.h"
#include "dobot/GetEndEffectorLaser.h"
#include "dobot/SetEndEffectorSuctionCup.h"
#include "dobot/GetEndEffectorSuctionCup.h"
#include "dobot/SetEndEffectorGripper.h"
#include "dobot/GetEndEffectorGripper.h"
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>
#include <cmath>
#include <vector>
#include <iostream>
//quan ju jie dian
ros::NodeHandle* n_p = NULL;
using namespace std;

// 红色工件运动程序
/*void MOVE_rtr(axif_tf::getPoint::ConstPtr message)
{
    int souce = 200; // 初始位置
    int j = message->x1.size();
    vector<Eigen::Vector3d> temp;
    ros::ServiceClient client_suck = n_p->serviceClient<dobot::SetEndEffectorSuctionCup>("/DobotServer/SetEndEffectorSuctionCup");
    dobot::SetEndEffectorSuctionCup srv_s;
    ros::ServiceClient client_mov = n_p->serviceClient<dobot::SetPTPCmd>("/DobotServer/SetPTPCmd");
    dobot::SetPTPCmd srv_m;
    srv_s.request.enableCtrl = 1; // 吸盘使能
    srv_m.request.ptpMode = 0; // PTP 为 JUMP 模式

    for (int i = 0; i < j; i++)
    {
        Eigen::Vector3d abc(message->x1[i], message->x2[i], message->x3[i]);
        temp.push_back(abc);
    }

    // 起始点
    for (int i = 0; i < j; i++)
    {
        cout << "等待:红色物块分类中第" << i << "块" << endl;
        srv_m.request.x = temp[i][0] * 1000; // PTP 模式中起始点赋值
        srv_m.request.y = temp[i][1] * 1000;
        srv_m.request.z = temp[i][2] * 1000;
        srv_m.request.r = 0;
        client_mov.call(srv_m);
        sleep(6);

        srv_s.request.suck = 1;
        client_suck.call(srv_s);
        sleep(2); // 吸盘吸取延时

        srv_m.request.x = souce; // PTP 模式中目标点赋值,单位 mm
        srv_m.request.y = -75;
        srv_m.request.z = -40;
        srv_m.request.r = 0;
        client_mov.call(srv_m);
        sleep(6); // (不同物块摆放自行根据实际情况修改)

        srv_s.request.suck = 0;
        client_suck.call(srv_s);
        sleep(2); // 吸盘释放延时

        souce += 50;
        if (ros::ok() == false) {
            break;
        }
    }
    temp.clear();
}

// 橙色工件运动程序
void MOVE_orange(axif_tf::getPoint::ConstPtr message)
{
    int souce = 300; // 初始位置，假设与红色工件不同
    int j = message->x1.size();
    vector<Eigen::Vector3d> temp;
    ros::ServiceClient client_suck = n_p->serviceClient<dobot::SetEndEffectorSuctionCup>("/DobotServer/SetEndEffectorSuctionCup");
    dobot::SetEndEffectorSuctionCup srv_s;
    ros::ServiceClient client_mov = n_p->serviceClient<dobot::SetPTPCmd>("/DobotServer/SetPTPCmd");
    dobot::SetPTPCmd srv_m;
    srv_s.request.enableCtrl = 1; // 吸盘使能
    srv_m.request.ptpMode = 0; // PTP 为 JUMP 模式

    for (int i = 0; i < j; i++)
    {
        Eigen::Vector3d abc(message->x1[i], message->x2[i], message->x3[i]);
        temp.push_back(abc);
    }

    // 起始点
    for (int i = 0; i < j; i++)
    {
        cout << "等待:橙色物块分类中第" << i << "块" << endl;
        srv_m.request.x = temp[i][0] * 1000; // PTP 模式中起始点赋值
        srv_m.request.y = temp[i][1] * 1000;
        srv_m.request.z = temp[i][2] * 1000;
        srv_m.request.r = 0;
        client_mov.call(srv_m);
        sleep(6);

        srv_s.request.suck = 1;
        client_suck.call(srv_s);
        sleep(2); // 吸盘吸取延时

        srv_m.request.x = souce; // PTP 模式中目标点赋值,单位 mm
        srv_m.request.y = -100; // 假设橙色工件的放置位置不同
        srv_m.request.z = -50;
        srv_m.request.r = 0;
        client_mov.call(srv_m);
        sleep(6); // (不同物块摆放自行根据实际情况修改)

        srv_s.request.suck = 0;
        client_suck.call(srv_s);
        sleep(2); // 吸盘释放延时

        souce += 50;
        if (ros::ok() == false) {
            break;
        }
    }
    temp.clear();
}*/




void MOVE_all(axif_tf::getPoint::ConstPtr message)
{
    static int souce = 250; 
    static int yy = 20;
    static int block_count = 0; // 计数器，用于跟踪每行放置的木块数量
    int j = message->x1.size();
    vector<Eigen::Vector3d> temp;
    ros::ServiceClient client_suck = n_p->serviceClient<dobot::SetEndEffectorSuctionCup>("/DobotServer/SetEndEffectorSuctionCup");
    dobot::SetEndEffectorSuctionCup srv_s;
    ros::ServiceClient client_mov = n_p->serviceClient<dobot::SetPTPCmd>("/DobotServer/SetPTPCmd");
    dobot::SetPTPCmd srv_m;
    srv_s.request.enableCtrl = 1; // 吸盘使能
    srv_m.request.ptpMode = 0; // PTP 为 JUMP 模式

    for (int i = 0; i < j; i++)
    {
        Eigen::Vector3d abc(message->x1[i], message->x2[i], message->x3[i]);
        temp.push_back(abc);
    }

    // 起始点
    for (int i = 0; i < j; i++)
    {
        cout << "等待:Move block:" << i << endl;
        srv_m.request.x = temp[i][0] * 1000; // PTP 模式中起始点赋值
        srv_m.request.y = temp[i][1] * 1000;
        srv_m.request.z = temp[i][2] * 1000;
        srv_m.request.r = 0;
        client_mov.call(srv_m);
        sleep(6);

        srv_s.request.suck = 1;
        client_suck.call(srv_s);
        sleep(2); // 吸盘吸取延时

        // 更新目标位置
        srv_m.request.x = souce; 
        srv_m.request.y = yy; 
        srv_m.request.z = -55;
        srv_m.request.r = 0;
        client_mov.call(srv_m);
        sleep(6); // (不同物块摆放自行根据实际情况修改)

        srv_s.request.suck = 0;
        client_suck.call(srv_s);
        sleep(2); // 吸盘释放延时

        // 更新计数器和位置
        block_count++;
        if (block_count == 3)
        {
            block_count = 0;
            yy -= 50; // 换行
            if (yy == -130) // 假设每行最多放置3个木块
            {
                yy = 20; // 重置到初始行
                souce -= 40; // 更新列位置
            }
        }
        else
        {
            yy -= 50; // 更新y坐标
        }

        if (ros::ok() == false) {
            break;
        }
    }
    temp.clear();
}




int main(int argc, char **argv)
{
    ros::init(argc, argv, "axif_tf_node");
    ros::NodeHandle n;
    n_p = &n;

    // 红色工件订阅
    ros::Subscriber pixel_sub1 = n.subscribe("result_10", 1, MOVE_all);

    ros::Subscriber pixel_sub2= n.subscribe("result_20", 1, MOVE_all);

    ros::Subscriber pixel_sub3= n.subscribe("result_30", 1, MOVE_all);

    ros::Subscriber pixel_sub4= n.subscribe("result_40", 1, MOVE_all);

    ros::Subscriber pixel_sub5= n.subscribe("result_50", 1, MOVE_all);

    ros::Subscriber pixel_sub6= n.subscribe("result_60", 1,MOVE_all);

    // 其他颜色工件订阅（根据需要自行补充）
    // ros::Subscriber pixel_sub2 = n.subscribe("result_20", 1, MOVE_other_color);

    ros::Rate loop_rate(10);
    while (ros::ok())
    {
        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}