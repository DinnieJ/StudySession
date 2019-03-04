set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(Math)

add_executable(
    shit.o
    Main.cpp
    MathShit.cpp
    MathShit.h
)
