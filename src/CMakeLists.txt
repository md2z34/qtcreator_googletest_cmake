set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
#include_directories(
#    ${CMAKE_SOURCE_DIR}/include
#)
#set(HEADER_FILES
#   seged.h
#)

add_compile_options(-Wall -Wextra -Wpedantic -fPIC)
add_executable(${PROJECT_NAME} main.cpp seged.cpp)
add_library(seged SHARED
    seged.cpp
)
