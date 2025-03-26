cmake_minimum_required(VERSION 3.8)
project(cpp_examples)

add_executable(hello_world src/hello_world.cpp)
target_include_directories(hello_world PUBLIC include)

set_property(TARGET hello_world PROPERTY CXX_STANDARD 17)
set_property(TARGET hello_world PROPERTY CXX_STANDARD_REQUIRED ON)