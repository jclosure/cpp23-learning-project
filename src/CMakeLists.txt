set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source files to the project
file(GLOB_RECURSE SOURCES "*.cpp" "*.hpp")
foreach(source ${SOURCES})
    get_filename_component(dir ${source} DIRECTORY)
    if(NOT dir STREQUAL ".")
        include_directories(${dir})
    endif()
endforeach()

# Define the target
add_library(cpp23_learning_project_lib STATIC ${SOURCES})

target_sources(cpp23_learning_project_lib PRIVATE ${SOURCES})

# Add dependencies
find_package(GLEW REQUIRED)
find_package(SDL3 CONFIG REQUIRED)

target_link_libraries(cpp23_learning_project_lib PRIVATE GLEW::GLEW)
target_link_libraries(cpp23_learning_project_lib PRIVATE SDL3::SDL3)
