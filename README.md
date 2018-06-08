# qtcreator_googletest_cmake
Putting the googletest and CMake together in QtCreator (without Qt, pure C++). Skeleton project

Some additional steps must be taken to link agains libgtest:

sudo apt install googletest
sudo apt-get install libgtest-dev
cd /usr/src/googletest/
sudo cmake CMakeLists.txt
sudo make
sudo cp ./googlemock/gtest/libgtest.a ./googlemock/gtest/libgtest_main.a ./googlemock/libgmock_main.a ./googlemock/libgmock.a /usr/lib
