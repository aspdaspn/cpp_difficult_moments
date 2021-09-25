CMAKE_MINIMUM_REQUIRED(VERSION 3.12)

PROJECT(project)
add_executable(project.bin src/person.cpp src/phonenumber.cpp src/phonebook.cpp src/main.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
target_compile_features(project.bin PUBLIC cxx_std_17)

# Enable Database of compiler flags for YCM
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Uncomment this for debug
# set(CMAKE_BUILD_TYPE Debug)

target_include_directories(project.bin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
