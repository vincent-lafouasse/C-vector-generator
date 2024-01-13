cmake_minimum_required(VERSION 3.5)

project(VectorMaker)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE) # LSP stuff, don't worry about it

add_executable(VectorMaker
	src/main.cpp
)
target_compile_options(VectorMaker PUBLIC -Wall -Wextra -Wpedantic -g3)
target_include_directories(VectorMaker PUBLIC include)
