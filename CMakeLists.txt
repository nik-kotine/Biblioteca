cmake_minimum_required(VERSION 3.10)
project(Biblioteca)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_COMPILER /usr/bin/g++)
add_executable(Biblioteca main.cpp Libro.cpp Biblioteca.cpp)
