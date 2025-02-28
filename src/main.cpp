#include <iostream>
#include "game/window.h"

int main() {
    std::cout << "Welcome to the C++23 Learning Project!" << std::endl;

    // Here you can call functions from other modules to demonstrate various C++ concepts.
    // For example:
    // demonstrateSyntax();
    // demonstrateLoops();
    // demonstrateDataStructures();
    // demonstrateAlgorithms();

    auto result = game::launchWindow();

    return 0;
}