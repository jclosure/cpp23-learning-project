#include <iostream>
#include <vector>
#include <algorithm>
#include "loop_examples.h"

namespace loop_examples {

void demonstrateForLoop() {
    std::cout << "For Loop Example:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Iteration: " << i << "\n";
    }
}

void demonstrateWhileLoop() {
    std::cout << "While Loop Example:\n";
    int i = 0;
    while (i < 5) {
        std::cout << "Iteration: " << i << "\n";
        ++i;
    }
}

void demonstrateRangeBasedForLoop() {
    std::cout << "Range-Based For Loop Example:\n";
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (const auto& num : numbers) {
        std::cout << "Number: " << num << "\n";
    }
}

void demonstrateIteratorLoop() {
    std::cout << "Iterator Loop Example:\n";
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << "Number: " << *it << "\n";
    }
}

int run() {
    demonstrateForLoop();
    demonstrateWhileLoop();
    demonstrateRangeBasedForLoop();
    demonstrateIteratorLoop();
    return 0;
}

} // namespace loop_examples