cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(thirdparty)

project(Ember)
add_subdirectory(Ember)

add_subdirectory(Editor)