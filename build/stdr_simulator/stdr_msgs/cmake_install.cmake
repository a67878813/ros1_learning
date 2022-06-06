# Install script for directory: /home/ea/ros_ws/src/stdr_simulator/stdr_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ea/ros_ws/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/msg" TYPE FILE FILES
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/Noise.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/LaserSensorMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/SonarSensorMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/KinematicMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/FootprintMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/RobotMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/RobotIndexedMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/RobotIndexedVectorMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/RfidSensorMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/RfidSensorMeasurementMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/RfidTag.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/RfidTagVector.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/SoundSensorMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/SoundSensorMeasurementMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/SoundSource.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/SoundSourceVector.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/ThermalSensorMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/ThermalSensorMeasurementMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/ThermalSource.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/ThermalSourceVector.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/CO2SensorMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/CO2SensorMeasurementMsg.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/CO2Source.msg"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/msg/CO2SourceVector.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/srv" TYPE FILE FILES
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/srv/LoadMap.srv"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/srv/LoadExternalMap.srv"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/srv/RegisterGui.srv"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/srv/MoveRobot.srv"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/srv/AddRfidTag.srv"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/srv/DeleteRfidTag.srv"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/srv/AddThermalSource.srv"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/srv/DeleteThermalSource.srv"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/srv/AddSoundSource.srv"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/srv/DeleteSoundSource.srv"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/srv/AddCO2Source.srv"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/srv/DeleteCO2Source.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/action" TYPE FILE FILES
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/action/RegisterRobot.action"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/action/SpawnRobot.action"
    "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/action/DeleteRobot.action"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/msg" TYPE FILE FILES
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotAction.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotActionGoal.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotActionResult.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotActionFeedback.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotGoal.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotResult.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/msg" TYPE FILE FILES
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotAction.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotActionGoal.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotActionResult.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotActionFeedback.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotGoal.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotResult.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/msg" TYPE FILE FILES
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotAction.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotActionGoal.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotActionResult.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotActionFeedback.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotGoal.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotResult.msg"
    "/home/ea/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/cmake" TYPE FILE FILES "/home/ea/ros_ws/build/stdr_simulator/stdr_msgs/catkin_generated/installspace/stdr_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/ea/ros_ws/devel/include/stdr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/ea/ros_ws/devel/share/roseus/ros/stdr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/ea/ros_ws/devel/share/common-lisp/ros/stdr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/ea/ros_ws/devel/share/gennodejs/ros/stdr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/ea/ros_ws/devel/lib/python2.7/dist-packages/stdr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/ea/ros_ws/devel/lib/python2.7/dist-packages/stdr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/ea/ros_ws/build/stdr_simulator/stdr_msgs/catkin_generated/installspace/stdr_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/cmake" TYPE FILE FILES "/home/ea/ros_ws/build/stdr_simulator/stdr_msgs/catkin_generated/installspace/stdr_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/cmake" TYPE FILE FILES
    "/home/ea/ros_ws/build/stdr_simulator/stdr_msgs/catkin_generated/installspace/stdr_msgsConfig.cmake"
    "/home/ea/ros_ws/build/stdr_simulator/stdr_msgs/catkin_generated/installspace/stdr_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs" TYPE FILE FILES "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/stdr_msgs" TYPE DIRECTORY FILES "/home/ea/ros_ws/src/stdr_simulator/stdr_msgs/include/" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

