cmake_minimum_required(VERSION 4.0)
project(fmsh_papenin)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(fmsh_papenin
        .idea/.gitignore
        .idea/workspace.xml
        main.cpp
        main.h
        A.cpp
        B.cpp
        C.cpp
        D.cpp
        ArgMax.cpp
)
