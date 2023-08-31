cmake_minimum_required(VERSION 3.23)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

set(TARGET_H
        Student.h
        Degree.h
        )

set(TARGET_SRC
        Student.cpp
        )

add_executable(untitled main.cpp)
