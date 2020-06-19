cmake_minimum_required(VERSION 3.16)
project(chess)

set(CMAKE_CXX_STANDARD 14)

add_executable(chess main.cpp Game.cpp Game.h Board.cpp Board.h Piece.cpp Piece.h Rook.cpp Rook.h Knight.cpp Knight.h Bishop.cpp Bishop.h Queen.cpp Queen.h King.cpp King.h Pawn.cpp Pawn.h)