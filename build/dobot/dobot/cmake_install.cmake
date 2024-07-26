# Install script for directory: /home/student/catkin_ws/src/dobot/dobot

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/student/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/srv" TYPE FILE FILES
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetCmdTimeout.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetDeviceSN.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetDeviceName.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetDeviceName.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetDeviceVersion.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetPose.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetAlarmsState.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/ClearAllAlarmsState.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetHOMEParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetHOMEParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetHOMECmd.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetEndEffectorParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetEndEffectorParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetEndEffectorLaser.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetEndEffectorLaser.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetEndEffectorSuctionCup.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetEndEffectorSuctionCup.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetEndEffectorGripper.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetEndEffectorGripper.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetJOGJointParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetJOGJointParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetJOGCoordinateParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetJOGCoordinateParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetJOGCommonParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetJOGCommonParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetJOGCmd.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetPTPJointParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetPTPJointParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetPTPCoordinateParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetPTPCoordinateParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetPTPJumpParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetPTPJumpParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetPTPCommonParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetPTPCommonParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetPTPCmd.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetCPParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetCPParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetCPCmd.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetARCParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetARCParams.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetARCCmd.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetWAITCmd.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetTRIGCmd.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetIOMultiplexing.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetIOMultiplexing.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetIODO.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetIODO.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetIOPWM.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetIOPWM.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetIODI.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetIOADC.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetEMotor.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetInfraredSensor.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetInfraredSensor.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetColorSensor.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/GetColorSensor.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetQueuedCmdStartExec.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetQueuedCmdStopExec.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetQueuedCmdForceStopExec.srv"
    "/home/student/catkin_ws/src/dobot/dobot/srv/SetQueuedCmdClear.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES "/home/student/catkin_ws/build/dobot/dobot/catkin_generated/installspace/dobot-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/student/catkin_ws/devel/include/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/student/catkin_ws/devel/share/roseus/ros/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/student/catkin_ws/devel/share/common-lisp/ros/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/student/catkin_ws/devel/share/gennodejs/ros/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/student/catkin_ws/devel/lib/python2.7/dist-packages/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/student/catkin_ws/devel/lib/python2.7/dist-packages/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/student/catkin_ws/build/dobot/dobot/catkin_generated/installspace/dobot.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES "/home/student/catkin_ws/build/dobot/dobot/catkin_generated/installspace/dobot-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES
    "/home/student/catkin_ws/build/dobot/dobot/catkin_generated/installspace/dobotConfig.cmake"
    "/home/student/catkin_ws/build/dobot/dobot/catkin_generated/installspace/dobotConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot" TYPE FILE FILES "/home/student/catkin_ws/src/dobot/dobot/package.xml")
endif()

