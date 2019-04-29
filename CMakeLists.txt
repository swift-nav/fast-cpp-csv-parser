cmake_minimum_required(VERSION 3.0)

project(fast-csv CXX)

add_library(fast-csv INTERFACE)
target_include_directories(fast-csv INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
