cmake_minimum_required (VERSION 2.8)

project (demo)

# 添加源代码变量
# 第一种方法
# aux_source_directory(. SRC_LIST)
# 第二种方法
set ( SRC_LIST
    ./main.cpp
    ./testFunc.cpp
    ./testFunc1.cpp)

add_executable(main ${SRC_LIST})
