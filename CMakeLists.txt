cmake_minimum_required(VERSION 3.14)
project(Low-Latency-Market-Data-Backtesting-Engine)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(my_app src/main.cpp)
target_link_libraries(my_app PRIVATE ${Boost_LIBRARIES})
