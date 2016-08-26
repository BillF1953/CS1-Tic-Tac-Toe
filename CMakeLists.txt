cmake_minimum_required(VERSION 3.2.2) # CMake version check
project(CS1-Tic-Tac-Toe)               # Create project "simple_example" ALL of our cmake files
find_package(Boost)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g -std=c++14") # Enable c++11 standard
set(SOURCE_FILES Board.cpp Tictactoe.cpp main.cpp)
set(HEADER_FILES Board.hpp TicTacToe.hpp)
#file (GLOB SRCS *.cpp *.hpp)       #look for all files in directory.

add_executable(TicTactToe ${SOURCE_FILES} ${HEADER_FILES})       # Add executable target with source files listed in SOURCE_FILES variable

