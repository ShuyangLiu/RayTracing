# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /home/shuyang/Documents/Clion/clion-2017.1.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/shuyang/Documents/Clion/clion-2017.1.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shuyang/CLionProjects/RayTracing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shuyang/CLionProjects/RayTracing/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RayTracing.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RayTracing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RayTracing.dir/flags.make

CMakeFiles/RayTracing.dir/main.cpp.o: CMakeFiles/RayTracing.dir/flags.make
CMakeFiles/RayTracing.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuyang/CLionProjects/RayTracing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RayTracing.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracing.dir/main.cpp.o -c /home/shuyang/CLionProjects/RayTracing/main.cpp

CMakeFiles/RayTracing.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracing.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shuyang/CLionProjects/RayTracing/main.cpp > CMakeFiles/RayTracing.dir/main.cpp.i

CMakeFiles/RayTracing.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracing.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shuyang/CLionProjects/RayTracing/main.cpp -o CMakeFiles/RayTracing.dir/main.cpp.s

CMakeFiles/RayTracing.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/RayTracing.dir/main.cpp.o.requires

CMakeFiles/RayTracing.dir/main.cpp.o.provides: CMakeFiles/RayTracing.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracing.dir/build.make CMakeFiles/RayTracing.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracing.dir/main.cpp.o.provides

CMakeFiles/RayTracing.dir/main.cpp.o.provides.build: CMakeFiles/RayTracing.dir/main.cpp.o


CMakeFiles/RayTracing.dir/Vector.cpp.o: CMakeFiles/RayTracing.dir/flags.make
CMakeFiles/RayTracing.dir/Vector.cpp.o: ../Vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuyang/CLionProjects/RayTracing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RayTracing.dir/Vector.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracing.dir/Vector.cpp.o -c /home/shuyang/CLionProjects/RayTracing/Vector.cpp

CMakeFiles/RayTracing.dir/Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracing.dir/Vector.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shuyang/CLionProjects/RayTracing/Vector.cpp > CMakeFiles/RayTracing.dir/Vector.cpp.i

CMakeFiles/RayTracing.dir/Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracing.dir/Vector.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shuyang/CLionProjects/RayTracing/Vector.cpp -o CMakeFiles/RayTracing.dir/Vector.cpp.s

CMakeFiles/RayTracing.dir/Vector.cpp.o.requires:

.PHONY : CMakeFiles/RayTracing.dir/Vector.cpp.o.requires

CMakeFiles/RayTracing.dir/Vector.cpp.o.provides: CMakeFiles/RayTracing.dir/Vector.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracing.dir/build.make CMakeFiles/RayTracing.dir/Vector.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracing.dir/Vector.cpp.o.provides

CMakeFiles/RayTracing.dir/Vector.cpp.o.provides.build: CMakeFiles/RayTracing.dir/Vector.cpp.o


CMakeFiles/RayTracing.dir/Ray.cpp.o: CMakeFiles/RayTracing.dir/flags.make
CMakeFiles/RayTracing.dir/Ray.cpp.o: ../Ray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuyang/CLionProjects/RayTracing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RayTracing.dir/Ray.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracing.dir/Ray.cpp.o -c /home/shuyang/CLionProjects/RayTracing/Ray.cpp

CMakeFiles/RayTracing.dir/Ray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracing.dir/Ray.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shuyang/CLionProjects/RayTracing/Ray.cpp > CMakeFiles/RayTracing.dir/Ray.cpp.i

CMakeFiles/RayTracing.dir/Ray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracing.dir/Ray.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shuyang/CLionProjects/RayTracing/Ray.cpp -o CMakeFiles/RayTracing.dir/Ray.cpp.s

CMakeFiles/RayTracing.dir/Ray.cpp.o.requires:

.PHONY : CMakeFiles/RayTracing.dir/Ray.cpp.o.requires

CMakeFiles/RayTracing.dir/Ray.cpp.o.provides: CMakeFiles/RayTracing.dir/Ray.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracing.dir/build.make CMakeFiles/RayTracing.dir/Ray.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracing.dir/Ray.cpp.o.provides

CMakeFiles/RayTracing.dir/Ray.cpp.o.provides.build: CMakeFiles/RayTracing.dir/Ray.cpp.o


CMakeFiles/RayTracing.dir/Camera.cpp.o: CMakeFiles/RayTracing.dir/flags.make
CMakeFiles/RayTracing.dir/Camera.cpp.o: ../Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuyang/CLionProjects/RayTracing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RayTracing.dir/Camera.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracing.dir/Camera.cpp.o -c /home/shuyang/CLionProjects/RayTracing/Camera.cpp

CMakeFiles/RayTracing.dir/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracing.dir/Camera.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shuyang/CLionProjects/RayTracing/Camera.cpp > CMakeFiles/RayTracing.dir/Camera.cpp.i

CMakeFiles/RayTracing.dir/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracing.dir/Camera.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shuyang/CLionProjects/RayTracing/Camera.cpp -o CMakeFiles/RayTracing.dir/Camera.cpp.s

CMakeFiles/RayTracing.dir/Camera.cpp.o.requires:

.PHONY : CMakeFiles/RayTracing.dir/Camera.cpp.o.requires

CMakeFiles/RayTracing.dir/Camera.cpp.o.provides: CMakeFiles/RayTracing.dir/Camera.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracing.dir/build.make CMakeFiles/RayTracing.dir/Camera.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracing.dir/Camera.cpp.o.provides

CMakeFiles/RayTracing.dir/Camera.cpp.o.provides.build: CMakeFiles/RayTracing.dir/Camera.cpp.o


CMakeFiles/RayTracing.dir/Color.cpp.o: CMakeFiles/RayTracing.dir/flags.make
CMakeFiles/RayTracing.dir/Color.cpp.o: ../Color.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuyang/CLionProjects/RayTracing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RayTracing.dir/Color.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracing.dir/Color.cpp.o -c /home/shuyang/CLionProjects/RayTracing/Color.cpp

CMakeFiles/RayTracing.dir/Color.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracing.dir/Color.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shuyang/CLionProjects/RayTracing/Color.cpp > CMakeFiles/RayTracing.dir/Color.cpp.i

CMakeFiles/RayTracing.dir/Color.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracing.dir/Color.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shuyang/CLionProjects/RayTracing/Color.cpp -o CMakeFiles/RayTracing.dir/Color.cpp.s

CMakeFiles/RayTracing.dir/Color.cpp.o.requires:

.PHONY : CMakeFiles/RayTracing.dir/Color.cpp.o.requires

CMakeFiles/RayTracing.dir/Color.cpp.o.provides: CMakeFiles/RayTracing.dir/Color.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracing.dir/build.make CMakeFiles/RayTracing.dir/Color.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracing.dir/Color.cpp.o.provides

CMakeFiles/RayTracing.dir/Color.cpp.o.provides.build: CMakeFiles/RayTracing.dir/Color.cpp.o


CMakeFiles/RayTracing.dir/Light.cpp.o: CMakeFiles/RayTracing.dir/flags.make
CMakeFiles/RayTracing.dir/Light.cpp.o: ../Light.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuyang/CLionProjects/RayTracing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/RayTracing.dir/Light.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracing.dir/Light.cpp.o -c /home/shuyang/CLionProjects/RayTracing/Light.cpp

CMakeFiles/RayTracing.dir/Light.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracing.dir/Light.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shuyang/CLionProjects/RayTracing/Light.cpp > CMakeFiles/RayTracing.dir/Light.cpp.i

CMakeFiles/RayTracing.dir/Light.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracing.dir/Light.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shuyang/CLionProjects/RayTracing/Light.cpp -o CMakeFiles/RayTracing.dir/Light.cpp.s

CMakeFiles/RayTracing.dir/Light.cpp.o.requires:

.PHONY : CMakeFiles/RayTracing.dir/Light.cpp.o.requires

CMakeFiles/RayTracing.dir/Light.cpp.o.provides: CMakeFiles/RayTracing.dir/Light.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracing.dir/build.make CMakeFiles/RayTracing.dir/Light.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracing.dir/Light.cpp.o.provides

CMakeFiles/RayTracing.dir/Light.cpp.o.provides.build: CMakeFiles/RayTracing.dir/Light.cpp.o


CMakeFiles/RayTracing.dir/Sphere.cpp.o: CMakeFiles/RayTracing.dir/flags.make
CMakeFiles/RayTracing.dir/Sphere.cpp.o: ../Sphere.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuyang/CLionProjects/RayTracing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/RayTracing.dir/Sphere.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracing.dir/Sphere.cpp.o -c /home/shuyang/CLionProjects/RayTracing/Sphere.cpp

CMakeFiles/RayTracing.dir/Sphere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracing.dir/Sphere.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shuyang/CLionProjects/RayTracing/Sphere.cpp > CMakeFiles/RayTracing.dir/Sphere.cpp.i

CMakeFiles/RayTracing.dir/Sphere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracing.dir/Sphere.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shuyang/CLionProjects/RayTracing/Sphere.cpp -o CMakeFiles/RayTracing.dir/Sphere.cpp.s

CMakeFiles/RayTracing.dir/Sphere.cpp.o.requires:

.PHONY : CMakeFiles/RayTracing.dir/Sphere.cpp.o.requires

CMakeFiles/RayTracing.dir/Sphere.cpp.o.provides: CMakeFiles/RayTracing.dir/Sphere.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracing.dir/build.make CMakeFiles/RayTracing.dir/Sphere.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracing.dir/Sphere.cpp.o.provides

CMakeFiles/RayTracing.dir/Sphere.cpp.o.provides.build: CMakeFiles/RayTracing.dir/Sphere.cpp.o


CMakeFiles/RayTracing.dir/Object.cpp.o: CMakeFiles/RayTracing.dir/flags.make
CMakeFiles/RayTracing.dir/Object.cpp.o: ../Object.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuyang/CLionProjects/RayTracing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/RayTracing.dir/Object.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracing.dir/Object.cpp.o -c /home/shuyang/CLionProjects/RayTracing/Object.cpp

CMakeFiles/RayTracing.dir/Object.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracing.dir/Object.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shuyang/CLionProjects/RayTracing/Object.cpp > CMakeFiles/RayTracing.dir/Object.cpp.i

CMakeFiles/RayTracing.dir/Object.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracing.dir/Object.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shuyang/CLionProjects/RayTracing/Object.cpp -o CMakeFiles/RayTracing.dir/Object.cpp.s

CMakeFiles/RayTracing.dir/Object.cpp.o.requires:

.PHONY : CMakeFiles/RayTracing.dir/Object.cpp.o.requires

CMakeFiles/RayTracing.dir/Object.cpp.o.provides: CMakeFiles/RayTracing.dir/Object.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracing.dir/build.make CMakeFiles/RayTracing.dir/Object.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracing.dir/Object.cpp.o.provides

CMakeFiles/RayTracing.dir/Object.cpp.o.provides.build: CMakeFiles/RayTracing.dir/Object.cpp.o


CMakeFiles/RayTracing.dir/Plane.cpp.o: CMakeFiles/RayTracing.dir/flags.make
CMakeFiles/RayTracing.dir/Plane.cpp.o: ../Plane.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shuyang/CLionProjects/RayTracing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/RayTracing.dir/Plane.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RayTracing.dir/Plane.cpp.o -c /home/shuyang/CLionProjects/RayTracing/Plane.cpp

CMakeFiles/RayTracing.dir/Plane.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracing.dir/Plane.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shuyang/CLionProjects/RayTracing/Plane.cpp > CMakeFiles/RayTracing.dir/Plane.cpp.i

CMakeFiles/RayTracing.dir/Plane.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracing.dir/Plane.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shuyang/CLionProjects/RayTracing/Plane.cpp -o CMakeFiles/RayTracing.dir/Plane.cpp.s

CMakeFiles/RayTracing.dir/Plane.cpp.o.requires:

.PHONY : CMakeFiles/RayTracing.dir/Plane.cpp.o.requires

CMakeFiles/RayTracing.dir/Plane.cpp.o.provides: CMakeFiles/RayTracing.dir/Plane.cpp.o.requires
	$(MAKE) -f CMakeFiles/RayTracing.dir/build.make CMakeFiles/RayTracing.dir/Plane.cpp.o.provides.build
.PHONY : CMakeFiles/RayTracing.dir/Plane.cpp.o.provides

CMakeFiles/RayTracing.dir/Plane.cpp.o.provides.build: CMakeFiles/RayTracing.dir/Plane.cpp.o


# Object files for target RayTracing
RayTracing_OBJECTS = \
"CMakeFiles/RayTracing.dir/main.cpp.o" \
"CMakeFiles/RayTracing.dir/Vector.cpp.o" \
"CMakeFiles/RayTracing.dir/Ray.cpp.o" \
"CMakeFiles/RayTracing.dir/Camera.cpp.o" \
"CMakeFiles/RayTracing.dir/Color.cpp.o" \
"CMakeFiles/RayTracing.dir/Light.cpp.o" \
"CMakeFiles/RayTracing.dir/Sphere.cpp.o" \
"CMakeFiles/RayTracing.dir/Object.cpp.o" \
"CMakeFiles/RayTracing.dir/Plane.cpp.o"

# External object files for target RayTracing
RayTracing_EXTERNAL_OBJECTS =

RayTracing: CMakeFiles/RayTracing.dir/main.cpp.o
RayTracing: CMakeFiles/RayTracing.dir/Vector.cpp.o
RayTracing: CMakeFiles/RayTracing.dir/Ray.cpp.o
RayTracing: CMakeFiles/RayTracing.dir/Camera.cpp.o
RayTracing: CMakeFiles/RayTracing.dir/Color.cpp.o
RayTracing: CMakeFiles/RayTracing.dir/Light.cpp.o
RayTracing: CMakeFiles/RayTracing.dir/Sphere.cpp.o
RayTracing: CMakeFiles/RayTracing.dir/Object.cpp.o
RayTracing: CMakeFiles/RayTracing.dir/Plane.cpp.o
RayTracing: CMakeFiles/RayTracing.dir/build.make
RayTracing: CMakeFiles/RayTracing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shuyang/CLionProjects/RayTracing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable RayTracing"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RayTracing.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RayTracing.dir/build: RayTracing

.PHONY : CMakeFiles/RayTracing.dir/build

CMakeFiles/RayTracing.dir/requires: CMakeFiles/RayTracing.dir/main.cpp.o.requires
CMakeFiles/RayTracing.dir/requires: CMakeFiles/RayTracing.dir/Vector.cpp.o.requires
CMakeFiles/RayTracing.dir/requires: CMakeFiles/RayTracing.dir/Ray.cpp.o.requires
CMakeFiles/RayTracing.dir/requires: CMakeFiles/RayTracing.dir/Camera.cpp.o.requires
CMakeFiles/RayTracing.dir/requires: CMakeFiles/RayTracing.dir/Color.cpp.o.requires
CMakeFiles/RayTracing.dir/requires: CMakeFiles/RayTracing.dir/Light.cpp.o.requires
CMakeFiles/RayTracing.dir/requires: CMakeFiles/RayTracing.dir/Sphere.cpp.o.requires
CMakeFiles/RayTracing.dir/requires: CMakeFiles/RayTracing.dir/Object.cpp.o.requires
CMakeFiles/RayTracing.dir/requires: CMakeFiles/RayTracing.dir/Plane.cpp.o.requires

.PHONY : CMakeFiles/RayTracing.dir/requires

CMakeFiles/RayTracing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RayTracing.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RayTracing.dir/clean

CMakeFiles/RayTracing.dir/depend:
	cd /home/shuyang/CLionProjects/RayTracing/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shuyang/CLionProjects/RayTracing /home/shuyang/CLionProjects/RayTracing /home/shuyang/CLionProjects/RayTracing/cmake-build-debug /home/shuyang/CLionProjects/RayTracing/cmake-build-debug /home/shuyang/CLionProjects/RayTracing/cmake-build-debug/CMakeFiles/RayTracing.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RayTracing.dir/depend
