cmake_minimum_required(VERSION 3.10)
project(OpenCL_Wrapper)
set(CMAKE_CXX_STANDARD 14)

find_package(OpenCL)
message("OpenCL is find : " ${OpenCL_FOUND})
message("OpenCL lib Path : " ${OpenCL_LIBRARIES})

add_library(utils OclUtils.cpp OclUtils.h)
target_link_libraries(utils ${OpenCL_LIBRARIES})

add_executable(OpenCL_Wrapper main.cpp)
target_link_libraries(OpenCL_Wrapper utils)
