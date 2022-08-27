cmake_minimum_required (VERSION 3.5)

project (demo)

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

#[[
    这里把option的名字保持和main.c里的宏名称一致，
    这样更加直观，也可以选择不同的名字。
    通过与add_definitions()的配合，就可以控制单个bin文件的打印输出了。

    其中-D后面的参数就是控制程序流向。
]]
option (WWW1 "print one message" OFF)
option (WWW2 "print another message" OFF)

if (WWW1)
    add_definitions (-DWWW1)
endif()

if (WWW2)
    add_definitions (-DWWW2)
endif()

add_executable (main main.cpp)
