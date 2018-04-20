cmake_minimum_required(VERSION 3.9)
project(Servidor)

set(CMAKE_CXX_STANDARD 11)

add_executable(Servidor main.cpp Servidor.cpp Servidor.h Parser.cpp Parser.h NodoSimple.h ListaSimple.h json.hpp MemoryManage.cpp MemoryManage.h)
