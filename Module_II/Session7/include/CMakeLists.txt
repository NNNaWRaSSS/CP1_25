cmake_minimum_required(VERSION 3.28)

project(session7_src)
message(STATUS "Setting project " ${PROJECT_NAME})

#set(CMAKE_BUILD_TYPE Debug)
#set(CMAKE_BUILD_TYPE Release)

#Dynamic Analysis with Sanitizers
add_subdirectory(sample_san_useafterfree)
add_subdirectory(sample_san_heapoob)
add_subdirectory(sample_san_stackoob)
add_subdirectory(sample_san_globaloob)
add_subdirectory(sample_san_useafterreturn)
add_subdirectory(sample_san_useafterscope)
add_subdirectory(sample_san_leak)

#Static Analysis
add_subdirectory(sample_static)
