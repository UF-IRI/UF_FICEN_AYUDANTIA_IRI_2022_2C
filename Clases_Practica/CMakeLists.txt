cmake_minimum_required(VERSION 3.0.0)
project(Practicas VERSION 2022.2.0)

option(BUILD_IntroCPP "Build IntroCPP" ON)
option(BUILD_Pruebas "Build Pruebas" OFF)

if(BUILD_IntroCPP)
    add_subdirectory(IntroCPP)
endif()
if(BUILD_Pruebas)
    add_subdirectory(Pruebas)
endif()