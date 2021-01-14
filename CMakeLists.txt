cmake_minimum_required(VERSION 3.17)
project(cube)

set(CMAKE_CXX_STANDARD 14)

add_executable(Quoridor
        main.cpp
        ChessEngine.cpp ChessEngine.h
        UserInterface.cpp UserInterface.h
        AI.cpp AI.h
        Error.h
        )