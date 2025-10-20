cmake_minimum_required(VERSION 3.14)

project(Session13 LANGUAGES C)

# Create separate executables for each C file
add_executable(hash hash.c)
add_executable(macro Macro.c)
