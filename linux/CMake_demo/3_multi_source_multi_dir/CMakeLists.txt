cmake_minimum_required (VERSION 2.8)

# 当前项目名叫demo
project (demo)

# 添加多个头文件的搜索路径
include_directories (test_func test_func1)

# 添加源代码变量
# 第一种方法
 aux_source_directory (test_func SRC_LIST)
 aux_source_directory (test_func1 SRC_LIST1)
# 第二种方法
#[[
set ( SRC_LIST
    ./main.cpp
    ./testFunc.cpp
    ./testFunc1.cpp)
]]

# main是要生成的可执行文件, 后面的是上面源代码变量
add_executable(main main.cpp ${SRC_LIST} ${SRC_LIST1})
