#include <iostream>

#include "algorithms/algorithm_examples.h"
#include "data_structures/data_structure_examples.h"
#include "game/one_d_fighter/game.hpp"
#include "game/random_numbers.h"
#include "game/window.h"
#include "loops/loop_examples.h"
#include "syntax/syntax_examples.h"

int main() {
    std::cout << "Welcome to the C++23 Learning Project!" << std::endl;

    // Here you can call functions from other modules to demonstrate various C++
    // concepts. For example:
    // syntax_examples::demonstrateVariableDeclarations();
    // syntax_examples::demonstrateStructuredBindings();
    // syntax_examples::demonstrateLambdaExpressions();
    // loop_examples::demonstrateForLoop();
    // data_structure_examples::vector_example();
    // data_structure_examples::map_example();
    // data_structure_examples::set_example();
    // data_structure_examples::unordered_map_example();
    // algorithm_examples::demonstrateAccumulate();
    // algorithm_examples::demonstrateFind();
    // algorithm_examples::demonstrateSort();

    // Uncomment the line below to launch the window
    // game::launchWindow();

    // Uncomment the line below to start the one_d_fighter game
    // one_d_fighter::Game fighterGame(100, 100);
    // fighterGame.Start();

    // Uncomment the line below to run the iterator examples
    data_structure_examples::list_example();
    data_structure_examples::iterate_list();
    data_structure_examples::iterate_set();
    data_structure_examples::iterate_map();
    data_structure_examples::iterate_vector();
    return 0;
}