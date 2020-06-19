cmake_minimum_required(VERSION 3.16)
project(chessGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(chessGame main.cpp Game.cpp Game.h Board.cpp Board.h)