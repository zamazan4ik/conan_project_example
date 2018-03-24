cmake_minimum_required(VERSION 3.9)
project(conan_project_example)

set(CMAKE_CXX_STANDARD 17)

include(conanbuildinfo.cmake)
conan_basic_setup()

add_executable(conan_project_example main.cpp)
target_link_libraries(conan_project_example ${CONAN_LIBS})