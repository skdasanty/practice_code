cmake_minimum_required(VERSION 3.8)
project(cpp_examples)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

add_library(hello_library src/hello_world.cpp)
target_include_directories(hello_library PUBLIC include)

add_executable(hello_world src/main.cpp)
target_link_libraries(hello_world hello_library)

add_executable(my_tests tests/hello_test.cc)
target_include_directories(my_tests PUBLIC src include)
target_link_libraries(my_tests hello_library GTest::gtest_main)

include(CTest)
add_test(NAME my_tests_run COMMAND my_tests)