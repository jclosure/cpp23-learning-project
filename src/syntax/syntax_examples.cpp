#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include "syntax_examples.h"

namespace syntax_examples {

void demonstrateVariableDeclarations() {
    int a = 10;
    auto b = 20; // Type inference
    decltype(a) c = 30; // Decltype usage

    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
}

void demonstrateStructuredBindings() {
    std::pair<int, double> p(1, 2.5);
    auto [x, y] = p; // Structured bindings

    std::cout << "x: " << x << ", y: " << y << std::endl;
}

void demonstrateLambdaExpressions() {
    auto add = [](int x, int y) { return x + y; };
    std::cout << "Lambda add(5, 3): " << add(5, 3) << std::endl;
}

int run() {
    demonstrateVariableDeclarations();
    demonstrateStructuredBindings();
    demonstrateLambdaExpressions();

    return 0;
}

} // namespace syntax_examples