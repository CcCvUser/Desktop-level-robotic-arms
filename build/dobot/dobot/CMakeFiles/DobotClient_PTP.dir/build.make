# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/student/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/catkin_ws/build

# Include any dependencies generated for this target.
include dobot/dobot/CMakeFiles/DobotClient_PTP.dir/depend.make

# Include the progress variables for this target.
include dobot/dobot/CMakeFiles/DobotClient_PTP.dir/progress.make

# Include the compile flags for this target's objects.
include dobot/dobot/CMakeFiles/DobotClient_PTP.dir/flags.make

dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o: dobot/dobot/CMakeFiles/DobotClient_PTP.dir/flags.make
dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o: /home/student/catkin_ws/src/dobot/dobot/src/DobotClient_PTP.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o"
	cd /home/student/catkin_ws/build/dobot/dobot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o -c /home/student/catkin_ws/src/dobot/dobot/src/DobotClient_PTP.cpp

dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.i"
	cd /home/student/catkin_ws/build/dobot/dobot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/catkin_ws/src/dobot/dobot/src/DobotClient_PTP.cpp > CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.i

dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.s"
	cd /home/student/catkin_ws/build/dobot/dobot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/catkin_ws/src/dobot/dobot/src/DobotClient_PTP.cpp -o CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.s

dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o.requires:

.PHONY : dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o.requires

dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o.provides: dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o.requires
	$(MAKE) -f dobot/dobot/CMakeFiles/DobotClient_PTP.dir/build.make dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o.provides.build
.PHONY : dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o.provides

dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o.provides.build: dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o


# Object files for target DobotClient_PTP
DobotClient_PTP_OBJECTS = \
"CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o"

# External object files for target DobotClient_PTP
DobotClient_PTP_EXTERNAL_OBJECTS =

/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: dobot/dobot/CMakeFiles/DobotClient_PTP.dir/build.make
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /opt/ros/melodic/lib/libroscpp.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /opt/ros/melodic/lib/librosconsole.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /opt/ros/melodic/lib/librostime.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /opt/ros/melodic/lib/libcpp_common.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP: dobot/dobot/CMakeFiles/DobotClient_PTP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP"
	cd /home/student/catkin_ws/build/dobot/dobot && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DobotClient_PTP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dobot/dobot/CMakeFiles/DobotClient_PTP.dir/build: /home/student/catkin_ws/devel/lib/dobot/DobotClient_PTP

.PHONY : dobot/dobot/CMakeFiles/DobotClient_PTP.dir/build

dobot/dobot/CMakeFiles/DobotClient_PTP.dir/requires: dobot/dobot/CMakeFiles/DobotClient_PTP.dir/src/DobotClient_PTP.cpp.o.requires

.PHONY : dobot/dobot/CMakeFiles/DobotClient_PTP.dir/requires

dobot/dobot/CMakeFiles/DobotClient_PTP.dir/clean:
	cd /home/student/catkin_ws/build/dobot/dobot && $(CMAKE_COMMAND) -P CMakeFiles/DobotClient_PTP.dir/cmake_clean.cmake
.PHONY : dobot/dobot/CMakeFiles/DobotClient_PTP.dir/clean

dobot/dobot/CMakeFiles/DobotClient_PTP.dir/depend:
	cd /home/student/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/catkin_ws/src /home/student/catkin_ws/src/dobot/dobot /home/student/catkin_ws/build /home/student/catkin_ws/build/dobot/dobot /home/student/catkin_ws/build/dobot/dobot/CMakeFiles/DobotClient_PTP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dobot/dobot/CMakeFiles/DobotClient_PTP.dir/depend

