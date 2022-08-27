cmake_minimum_required (VERSION 3.5)

# 当前项目名叫demo
project (demo)

#设置可执行程序输出路径
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 设置源文件目录
set (SRC_LIST ${PROJECT_SOURCE_DIR}/src/main.cpp)

#头文件查找路径
include_directories (${PROJECT_SOURCE_DIR}/testFunc/inc)


#[[
    在指定目录下查找指定库，并把库的绝对路径存放到变量里，
    其第一个参数是变量名称，
    第二个参数是库名称，
    第三个参数是HINTS，
    第4个参数是路径，其它用法可以参考cmake文档
    
    注意：默认是查找动态库，如果想直接指定使用动态库还是静态库，可以显式指定,
    写成find_library(TESTFUNC_LIB libtestFunc.so ...或者find_library(TESTFUNC_LIB libtestFunc.a ...
]]
find_library (TESTFUNC_LIB testFunc HINTS ${PROJECT_SOURCE_DIR}/testFunc/lib)

add_executable (main ${SRC_LIST})

#把目标文件与库文件进行链接
target_link_libraries (main ${TESTFUNC_LIB})
