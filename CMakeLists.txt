cmake_minimum_required(VERSION 3.0.0)
project(IRI VERSION 2022.2C.0)

add_subdirectory(IntroCPP Clases_Practica/IntroCpp)
add_subdirectory(Testing_Stuffs Clases_Practica/Testing_Stuffs)

option(BUILD_IntroCPP "Build IntroCPP" ON)
option(BUILD_Testing_Stuffs "Build Testing_Stuffs" ON)

if(BUILD_IntroCPP)
    add_subdirectory(IntroCPP)
endif()
if(BUILD_Testing_Stuffs)
    add_subdirectory(Testing_Stuffs)
endif()