cmake_minimum_required(VERSION 3.7)
project(RayTracing)

set(CMAKE_CXX_STANDARD 11)

set(GCC_COVERAGE_LINK_FLAGS "-pthread")
add_definitions(${GCC_COVERAGE_LINK_FLAGS})

SET( CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}" )

set(SOURCE_FILES main.cpp Vector.cpp Vector.h Ray.cpp Ray.h Camera.cpp Camera.h Color.cpp Color.h Light.cpp Light.h Sphere.cpp Sphere.h Object.cpp Object.h Plane.cpp Plane.h)
add_executable(RayTracing ${SOURCE_FILES})