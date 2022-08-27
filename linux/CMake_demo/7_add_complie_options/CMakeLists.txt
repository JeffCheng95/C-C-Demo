cmake_minimum_required (VERSION 2.8)

project (demo)

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

#[[
    显式添加编译选项
    -w 关闭编译时的警告，也就是编译后不显示任何warning
    -Wall 编译后显示所有警告
    -W 类似 -Wall，会显示警告，但是只显示编译器认为会出现错误的警告
]]
add_compile_options (-std=c++11 -Wall)

add_executable (main main.cpp)
