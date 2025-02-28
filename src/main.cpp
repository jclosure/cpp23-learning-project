#include <iostream>
#include "game/window.h"
#include "syntax/syntax_examples.h"
#include "loops/loop_examples.h"
#include "data_structures/data_structure_examples.h"
#include "algorithms/algorithm_examples.h"

int main() {
    std::cout << "Welcome to the C++23 Learning Project!" << std::endl;

    // Here you can call functions from other modules to demonstrate various C++ concepts.
    // For example:
    syntax_examples::demonstrateVariableDeclarations();
    syntax_examples::demonstrateStructuredBindings();
    syntax_examples::demonstrateLambdaExpressions();
    loop_examples::demonstrateForLoop();
    data_structure_examples::vector_example();
    data_structure_examples::map_example();
    data_structure_examples::set_example();
    data_structure_examples::unordered_map_example();
    algorithm_examples::demonstrateAccumulate();
    algorithm_examples::demonstrateFind();
    algorithm_examples::demonstrateSort();
    
    // Uncomment the line below to launch the window
    // game::launchWindow();
  

    // auto result = game::launchWindow();

    return 0;
}