
aux_source_directory (. SRC_LIST)

include_directories (../include)

add_executable (main ${SRC_LIST})

#[[
    命令set，是用于定义变量的，EXECUTABLE_OUT_PATH和PROJECT_SOURCE_DIR是
    CMake自带的预定义变量，其意义如下:
    EXECUTABLE_OUTPUT_PATH ：目标二进制可执行文件的存放位置
    PROJECT_SOURCE_DIR：工程的根目录

    这里set的意思是把存放elf文件的位置设置为工程根目录下的bin目录
]]
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
