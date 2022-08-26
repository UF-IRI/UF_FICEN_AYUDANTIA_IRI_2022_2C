cmake_minimum_required(VERSION 3.0.0)
project(Figuras VERSION 0.1.0)

add_executable(Figuras "main.cpp" "pseudo_libreria/PseudoCodeWrapper/PseudoCodeWrapper.hpp")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)