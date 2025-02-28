cmake_minimum_required(VERSION 3.14)

# Set the toolchain file for vcpkg
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"
    CACHE STRING "Vcpkg toolchain file")

project(cpp23_learning_project VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Add the main executable
add_executable(cpp23_learning_project src/main.cpp)

# Add subdirectories for source files
add_subdirectory(src)

# Enable testing
enable_testing()
# Add subdirectory for tests
add_subdirectory(tests)