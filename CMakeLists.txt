cmake_minimum_required(VERSION 3.15)
project(KaidenMod)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Include Geode SDK
include_directories(geode/include)
link_directories(geode/build)

add_library(KaidenMod SHARED
    src/main.cpp
    src/decorator.cpp
)

target_link_libraries(KaidenMod geode)
