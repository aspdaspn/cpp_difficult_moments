CMAKE_MINIMUM_REQUIRED(VERSION 3.12)

PROJECT(project)
add_executable(project.bin src/main.cpp)
target_link_libraries(project.bin Threads::Threads)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
target_compile_features(project.bin PUBLIC cxx_std_17)

# Enable Database of compiler flags for YCM
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Enable Thread library
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)

# Uncomment this for debug
# set(CMAKE_BUILD_TYPE Debug)

target_include_directories(project.bin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
