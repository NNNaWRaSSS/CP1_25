cmake_minimum_required(VERSION 3.28)

project(sample_static LANGUAGES C)
message(STATUS "Setting project " ${PROJECT_NAME})

if(CMAKE_BUILD_TYPE MATCHES "Debug")
    message(STATUS "Setting cppcheck")
    #Static Analysis with CPPCheck
    find_program(CMAKE_C_CPPCHECK NAMES "cppcheck" DOC "Path to cppcheck executable")

    if(NOT CMAKE_C_CPPCHECK)
        message(FATAL_ERROR "cppcheck not found.")
    else()
        message(STATUS "cppcheck found: ${CMAKE_C_CPPCHECK}")
        set(CMAKE_C_CPPCHECK "${CMAKE_C_CPPCHECK}" --enable=warning,performance,portability,style --error-exitcode=1 --force --quiet)
    endif()
else()
    message(STATUS "Not setting cppcheck")
endif()

add_executable(samplestatic samplestatic.c) #Add cppcheck before executables to be reviewed

message(STATUS "CMAKE_C_FLAGS" ${CMAKE_C_FLAGS})
message(STATUS "CMAKE_C_COMPILER_LAUNCHER" ${CMAKE_C_COMPILER_LAUNCHER})