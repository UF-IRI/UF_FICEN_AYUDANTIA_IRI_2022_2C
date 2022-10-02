cmake_minimum_required(VERSION 3.0.0)
project(Guia_Memoria_Dinamica VERSION 0.1.0)

add_executable(Guia_Memoria_Dinamica main.cpp ejercicio_10.hpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)