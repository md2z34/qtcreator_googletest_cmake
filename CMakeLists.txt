cmake_minimum_required(VERSION 3.0)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
project(01_proba)

# look in CMakeLists.txt in these subdirs
add_subdirectory(tests)
add_subdirectory(src)
#add_subdirectory(include)

# show header files in include dir
FILE(GLOB_RECURSE LibFiles "include/*.h")
add_custom_target(headers SOURCES ${LibFiles})
