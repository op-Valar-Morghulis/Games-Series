cmake_minimum_required (VERSION 2.8.11)
project (Transformation)

set(CMAKE_CXX_STANDARD 11)

#导入依赖包，在用CMake Build的时候，都会被设置好
#这条命令执行后，CMake 会到变量 CMAKE_MODULE_PATH 指示的目录中查找文件 Findname.cmake 并执行
find_package(Eigen3 REQUIRED)

include_directories(EIGEN3_INCLUDE_DIR)

add_executable (Transformation main.cpp)
