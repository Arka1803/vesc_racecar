# Install script for directory: /home/vescracecar/catkin_ws/src/RPLidar_Hector_SLAM/hector_slam/hector_imu_attitude_to_tf

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/vescracecar/catkin_ws/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/vescracecar/catkin_ws/build/RPLidar_Hector_SLAM/hector_slam/hector_imu_attitude_to_tf/catkin_generated/installspace/hector_imu_attitude_to_tf.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hector_imu_attitude_to_tf/cmake" TYPE FILE FILES
    "/home/vescracecar/catkin_ws/build/RPLidar_Hector_SLAM/hector_slam/hector_imu_attitude_to_tf/catkin_generated/installspace/hector_imu_attitude_to_tfConfig.cmake"
    "/home/vescracecar/catkin_ws/build/RPLidar_Hector_SLAM/hector_slam/hector_imu_attitude_to_tf/catkin_generated/installspace/hector_imu_attitude_to_tfConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hector_imu_attitude_to_tf" TYPE FILE FILES "/home/vescracecar/catkin_ws/src/RPLidar_Hector_SLAM/hector_slam/hector_imu_attitude_to_tf/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hector_imu_attitude_to_tf/imu_attitude_to_tf_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hector_imu_attitude_to_tf/imu_attitude_to_tf_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hector_imu_attitude_to_tf/imu_attitude_to_tf_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hector_imu_attitude_to_tf" TYPE EXECUTABLE FILES "/home/vescracecar/catkin_ws/devel/lib/hector_imu_attitude_to_tf/imu_attitude_to_tf_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hector_imu_attitude_to_tf/imu_attitude_to_tf_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hector_imu_attitude_to_tf/imu_attitude_to_tf_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hector_imu_attitude_to_tf/imu_attitude_to_tf_node"
         OLD_RPATH "/opt/ros/melodic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hector_imu_attitude_to_tf/imu_attitude_to_tf_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hector_imu_attitude_to_tf/launch/" TYPE DIRECTORY FILES "/home/vescracecar/catkin_ws/src/RPLidar_Hector_SLAM/hector_slam/hector_imu_attitude_to_tf/launch/")
endif()

