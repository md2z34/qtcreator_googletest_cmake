set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_compile_options(-Wall -Wextra -Wpedantic -fPIC)
add_executable(${PROJECT_NAME} main.cpp seged.cpp ../include/seged.h)
add_library(seged SHARED
    seged.cpp
)
