cmake_minimum_required(VERSION 3.10)

# 项目名称
project(sensortaskbase-test)

# 指定编译器
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# 使用 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 指定源文件
add_executable(sensortaskbase-test ${CMAKE_SOURCE_DIR} ./sensortaskbase-test.cpp)
