cmake_minimum_required(VERSION 3.29)
project(InheritCPPTR)

set(CMAKE_CXX_STANDARD 20)

add_executable(InheritCPPTR main.cpp
        Person.cpp
        Person.h
        Student.cpp
        Student.h)
