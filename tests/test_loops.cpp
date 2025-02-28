#include <gtest/gtest.h>
#include "loops/loop_examples.h" // Include the loop examples to test

TEST(LoopExamplesTest, LoopExamplesDemonstrateForLoopTest) {
    testing::internal::CaptureStdout();
    loop_examples::demonstrateForLoop();
    std::string output = testing::internal::GetCapturedStdout();
    std::string expected_output = "For Loop Example:\n";
    for (int i = 0; i < 5; ++i) {
        expected_output += "Iteration: " + std::to_string(i) + "\n";
    }
    printf("Output: %s\n", output.c_str());
    printf("Expected Output: %s\n", expected_output.c_str());

    EXPECT_EQ(output, expected_output);
    // FAIL() << "Finish the test!";
}

TEST(LoopExamplesTest, ForLoopTest) {
    int sum = 0;
    for (int i = 1; i <= 5; ++i) {
        sum += i;
    }
    EXPECT_EQ(sum, 15);
}

TEST(LoopExamplesTest, WhileLoopTest) {
    int sum = 0;
    int i = 1;
    while (i <= 5) {
        sum += i;
        ++i;
    }
    EXPECT_EQ(sum, 15);
}

TEST(LoopExamplesTest, RangeBasedForLoopTest) {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = 0;
    for (const auto& num : numbers) {
        sum += num;
    }
    EXPECT_EQ(sum, 15);
}

TEST(LoopExamplesTest, IteratorTest) {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = 0;
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        sum += *it;
    }
    EXPECT_EQ(sum, 15);
}