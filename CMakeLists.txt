cmake_minimum_required(VERSION 3.7)
project(RayTracing)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Vector.cpp Vector.h Ray.cpp Ray.h Camera.cpp Camera.h Color.cpp Color.h Light.cpp Light.h Sphere.cpp Sphere.h Object.cpp Object.h Plane.cpp Plane.h)
add_executable(RayTracing ${SOURCE_FILES})