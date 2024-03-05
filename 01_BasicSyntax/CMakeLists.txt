cmake_minimum_required(VERSION 3.27)
project(01_BasicSyntax)

set(CMAKE_CXX_STANDARD 17)

add_executable(01_BasicSyntax main.cpp
        01_StudentInformation.cpp
        02_PassedOrFailed.cpp)
