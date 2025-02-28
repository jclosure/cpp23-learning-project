set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source files to the project
file(GLOB_RECURSE SOURCES "*.cpp")
foreach(source ${SOURCES})
    get_filename_component(dir ${source} DIRECTORY)
    if(NOT dir STREQUAL ".")
        include_directories(${dir})
    endif()
endforeach()

# Define the target
add_library(cpp23_learning_project_lib STATIC ${SOURCES})

target_sources(cpp23_learning_project_lib PRIVATE ${SOURCES})
