cmake_minimum_required(VERSION 3.17)
project(homework1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(homework1
        main.cpp
        Seat.cpp
        Movie.h
        Seat.h Movie.cpp)
