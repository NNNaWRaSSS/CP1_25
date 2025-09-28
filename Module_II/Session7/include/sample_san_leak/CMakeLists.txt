cmake_minimum_required(VERSION 3.28)

project(sample_asan_leak LANGUAGES C)
message(STATUS "Setting project " ${PROJECT_NAME})

add_executable(asanleak asanleak.c)

if(CMAKE_BUILD_TYPE MATCHES "Debug")
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g3 -fno-omit-frame-pointer -fsanitize=address")
    set (CMAKE_C_COMPILER_LAUNCHER ${CMAKE_COMMAND} -E env detect_leaks=1 ${CMAKE_CXX_COMPILER_LAUNCHER})
else()
    message(STATUS "No Sanitizer set")
endif()

message(STATUS "CMAKE_C_FLAGS" ${CMAKE_C_FLAGS})
message(STATUS "CMAKE_C_COMPILER_LAUNCHER" ${CMAKE_C_COMPILER_LAUNCHER})