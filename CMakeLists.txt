cmake_minimum_required(VERSION 3.25)
project(FrohProject2)

set(CMAKE_CXX_STANDARD 17)

add_executable(FrohProject2
        project2.cpp
        symboltable.cpp
        parse.cpp
        subexpression.cpp
        variable.cpp
        operand.cpp
        division.h
        remainder.h
        exponentiation.h
        minimum.h
        maximum.h
        average.h
        unary.h
        ternary.h
        quaternary.h variableinitializationexception.h)
