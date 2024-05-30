cmake_minimum_required(VERSION 3.4)
project(RK2)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_TESTS "Build tests" OFF)

add_library(code STATIC ${CMAKE_CURRENT_SOURCE_DIR}/code/Circle.cpp
${CMAKE_CURRENT_SOURCE_DIR}/code/Main.cpp
${CMAKE_CURRENT_SOURCE_DIR}/code/Square.cpp )
target_include_directories(code PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/code)


if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(third-party/gtest)
  file(GLOB CODE_TEST_SOURCES tests/*.cpp)
  add_executable(check ${CODE_TEST_SOURCES}) 
  target_link_libraries(check code gtest_main)
  add_test(NAME check COMMAND check)
endif()

include(CPack.cmake)



