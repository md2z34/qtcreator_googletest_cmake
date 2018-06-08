include_directories(
    /usr/src/googletest/googletest/include/
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/include
)

add_executable(probaTests
    main.cpp
    probaTests.cpp
)

target_link_libraries(probaTests
    gtest
    pthread
    seged
)

#add_custom_command(
#    TARGET probaTests
#    POST_BUILD
#    COMMAND probaTests
#    ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
#)
