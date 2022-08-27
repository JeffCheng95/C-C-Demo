cmake_minimum_required (VERSION 3.5)

# 当前项目名叫demo
project (demo)

# 设置源文件目录
set (SRC_LIST ${PROJECT_SOURCE_DIR}/testFunc/testFunc.cpp)
# 设置库文件的默认输出路径，这里设置为工程目录下的lib目录(cmake预定义变量)
set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)


#[[ 生成动态库或静态库
    (第1个参数指定库的名字；
    第2个参数决定是动态还是静态，如果没有就默认静态；
    第3个参数指定生成库的源文件) ]]
add_library (testFunc_shared SHARED ${SRC_LIST})
add_library (testFunc_static STATIC ${SRC_LIST})

# 设置最终生成的库的名称，还有其它功能，如设置库的版本号等等
# 设置生成动态库变量
set_target_properties (testFunc_shared PROPERTIES OUTPUT_NAME "testFunc")
# 设置生成静态库变量
set_target_properties (testFunc_static PROPERTIES OUTPUT_NAME "testFunc")


# cmake在构建一个新的target时，会尝试清理掉其他使用这个名字的库，
# 因此，在构建libhello.a时，就会清理掉libhello.so.
# 为了回避这个问题，比如再次使用SET_TARGET_PROPERTIES定义 CLEAN_DIRECT_OUTPUT属性。
#set_target_properties (testFunc_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)
#set_target_properties (testFunc_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)


