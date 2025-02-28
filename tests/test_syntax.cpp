#include <gtest/gtest.h>
#include "syntax/syntax_examples.cpp" // Include the syntax examples header or implementation

TEST(SyntaxExamplesTest, VariableDeclaration) {
    int a = 5;
    EXPECT_EQ(a, 5);
}

TEST(SyntaxExamplesTest, TypeInference) {
    auto b = 10.5;
    EXPECT_DOUBLE_EQ(b, 10.5);
}

TEST(SyntaxExamplesTest, StructuredBindings) {
    std::pair<int, double> p(1, 2.5);
    auto [x, y] = p;
    EXPECT_EQ(x, 1);
    EXPECT_DOUBLE_EQ(y, 2.5);
}

TEST(SyntaxExamplesTest, LambdaExpression) {
    auto add = [](int x, int y) { return x + y; };
    EXPECT_EQ(add(2, 3), 5);
}