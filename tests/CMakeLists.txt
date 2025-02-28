set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

find_package(GTest CONFIG REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the src directory to the include directories
include_directories(${CMAKE_SOURCE_DIR}/src)

# Link the test executables with the static library
add_executable(test_syntax test_syntax.cpp)
target_link_libraries(test_syntax GTest::gtest GTest::gtest_main cpp23_learning_project_lib)

add_executable(test_loops test_loops.cpp)
target_link_libraries(test_loops GTest::gtest GTest::gtest_main cpp23_learning_project_lib)

add_executable(test_data_structures test_data_structures.cpp)
target_link_libraries(test_data_structures GTest::gtest GTest::gtest_main cpp23_learning_project_lib)

add_executable(test_algorithms test_algorithms.cpp)
target_link_libraries(test_algorithms GTest::gtest GTest::gtest_main cpp23_learning_project_lib)

# Create a single executable for all tests
add_executable(all_tests test_syntax.cpp test_loops.cpp test_data_structures.cpp test_algorithms.cpp)
target_link_libraries(all_tests GTest::gtest GTest::gtest_main cpp23_learning_project_lib)

# Add a test for the combined executable
add_test(NAME AllTests COMMAND all_tests)

# Add tests for each individual file
add_test(NAME SyntaxTest COMMAND test_syntax)
add_test(NAME LoopsTest COMMAND test_loops)
add_test(NAME DataStructuresTest COMMAND test_data_structures)
add_test(NAME AlgorithmsTest COMMAND test_algorithms)