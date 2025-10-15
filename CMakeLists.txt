cmake_minimum_required(VERSION 4.0)
project(lab06containers)

set(CMAKE_CXX_STANDARD 26)

add_executable(lab06containers main.cpp
        include/lab.hpp
        src/find.cpp
        src/findinsorted.cpp
        src/wordscounter.cpp
        src/wordsmapcounter.cpp
        src/uniquewords.cpp
        src/diffwordscounter.cpp
        src/reversenums.cpp
        src/plusesdeleter.cpp
        src/sort.cpp)
