cmake_minimum_required(VERSION 3.15)
project(ufo_game)

set(CMAKE_CXX_STANDARD 14)


add_executable(main main.cpp ufo_functions.cpp ufo_functions.h)

link_libraries(string vector cstdlab iostream)