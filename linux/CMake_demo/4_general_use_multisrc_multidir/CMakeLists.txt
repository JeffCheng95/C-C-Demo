cmake_minimum_required (VERSION 2.8)

# 当前项目名叫demo
project (demo)

#[[ 这个命令可以向当前工程添加存放源文件的子目录
    这里指定src目录下存放了源文件，当执行cmake时，
    就会进入src目录下去找src目录下的CMakeLists.txt ]]

add_subdirectory (src)


