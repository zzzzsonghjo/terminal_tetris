cmake_minimum_required(VERSION 3.27)
project(tetris)

set(CXX_STANDARD 20)

aux_source_directory(. src)
add_executable(tetris ${src})