# CMakeList.txt : CMake project for Tutorial_Pseudo, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Tutorial_Pseudo")

# Add source to this project's executable.
add_executable (Tutorial_Pseudo "Tutorial_Pseudo.cpp" "Tutorial_Pseudo.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Tutorial_Pseudo PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
