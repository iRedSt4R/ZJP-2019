project(Tennis-Refactoring)

add_definitions(-DUSE_CMAKE)
include_directories(${CMAKE_SOURCE_DIR})

add_executable(tennis_v1 tennis_v2.cc all_tests.cpp all_tests.hpp test_suite.tests.cpp)
add_executable(tennis_v2 tennis_v2.cc all_tests.cpp all_tests.hpp test_suite.tests.cpp)
add_executable(tennis_v3 tennis_v3.cc all_tests.cpp all_tests.hpp test_suite.tests.cpp)