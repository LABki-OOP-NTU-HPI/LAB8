cmake_minimum_required(VERSION 3.31)
project(LAB8)

set(CMAKE_CXX_STANDARD 20)

add_executable(LAB8 main.cpp
        Src/Number.cpp
        Include/Number.h
        Src/Rational.cpp
        Include/Rational.h
        Src/Decimal.cpp
        Include/Decimal.h)
