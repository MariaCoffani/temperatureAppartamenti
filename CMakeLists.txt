cmake_minimum_required(VERSION 3.31)
project(temperatureAppartamenti)

set(CMAKE_CXX_STANDARD 23)

add_executable(temperatureAppartamenti main.cpp
        temperature.cpp
        temperature.h)
