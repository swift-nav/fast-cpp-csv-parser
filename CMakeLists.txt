cmake_minimum_required(VERSION 3.0)

project(fast-csv CXX)

option(FAST_CSV_OPTION_TYPE_SUPPORT "Include support for parsing values into a std::experimental::optional")

add_library(fast-csv INTERFACE)
target_include_directories(fast-csv INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
if (${FAST_CSV_OPTION_TYPE_SUPPORT})
    target_compile_definitions(fast-csv INTERFACE FAST_CSV_OPTION_TYPE_SUPPORT)
endif()
