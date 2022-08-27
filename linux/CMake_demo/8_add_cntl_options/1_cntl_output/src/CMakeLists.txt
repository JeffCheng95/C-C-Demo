cmake_minimum_required (VERSION 3.5)

add_executable (main1 main1.cpp)

if (MYDEBUG)
    add_executable (main2 main2.cpp)
else ()
    message (STATUS "Currently is not in debug mode")
endif()
