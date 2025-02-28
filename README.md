# cpp23-learning-project

This project is designed to help you learn modern C++ concepts through practical examples and testing. It covers various aspects of C++23, including syntax, looping idioms, standard library data structures, and common algorithm design considerations.

## Project Structure

- **src/**: Contains the source code for the project.
  - **main.cpp**: Entry point of the application.
  - **syntax/**: Examples of modern C++ syntax.
    - **syntax_examples.cpp**: Demonstrates variable declarations, type inference, structured bindings, and lambda expressions.
  - **loops/**: Examples of different looping idioms.
    - **loop_examples.cpp**: Covers for loops, while loops, range-based for loops, and iterators.
  - **data_structures/**: Showcases standard library data structures.
    - **data_structure_examples.cpp**: Examples of std::vector, std::map, std::set, and std::unordered_map.
  - **algorithms/**: Demonstrates common algorithm design considerations.
    - **algorithm_examples.cpp**: Uses std::sort, std::find, and std::accumulate.

- **tests/**: Contains unit tests for the project.
  - **CMakeLists.txt**: CMake configuration for the test suite.
  - **test_main.cpp**: Main function for the test suite, initializing Google Test.
  - **test_syntax.cpp**: Unit tests for syntax examples.
  - **test_loops.cpp**: Unit tests for loop examples.
  - **test_data_structures.cpp**: Unit tests for data structure examples.
  - **test_algorithms.cpp**: Unit tests for algorithm examples.

- **CMakeLists.txt**: Main CMake configuration for the project, specifying the project name and C++ standard.

## Setup Instructions

1. Clone the repository:
   Make sure to `--recurse-submodules`
   ```
   git clone --recurse-submodules https://github.com/jclosure/cpp23-learning-project.git
   cd cpp23-learning-project
   ```

2. Build:
   ```
   ./scripts/build.sh
   ```

5. Rebuild and test:
   ```
   ./scripts/test.sh
   ```

6. Running specific tests:
   Everything:
   ```
   ./build/tests/all_tests
   ```
   Individual tests:
   ```
   ./build/tests/test_algorithms
   ./build/tests/test_data_structures
   ./build/tests/test_loops
   ./build/tests/test_syntax
   ```

## Concepts Covered

- Modern C++ syntax and features
- Looping constructs and idioms
- Standard library data structures
- Algorithm design and usage of standard algorithms

This project serves as a practical guide to understanding and applying modern C++ concepts effectively. Happy coding!

## Reference Materials
Thanks to `Ben` for [instruction](https://github.com/ChillstepCoder/GamedevPlayground/tree/main) and [inspiration](https://www.youtube.com/watch?v=PzRGsH3dOqI)