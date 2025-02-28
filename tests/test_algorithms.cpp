#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>
#include <algorithm>
#include <numeric>

TEST(AlgorithmExamples, SortTest) {
    std::vector<int> vec = {5, 3, 8, 1, 2};
    std::sort(vec.begin(), vec.end());
    EXPECT_THAT(vec, ::testing::ElementsAre(1, 2, 3, 5, 8));
}

TEST(AlgorithmExamples, FindTest) {
    std::vector<int> vec = {5, 3, 8, 1, 2};
    auto it = std::find(vec.begin(), vec.end(), 3);
    EXPECT_NE(it, vec.end());
    EXPECT_EQ(*it, 3);
}

TEST(AlgorithmExamples, AccumulateTest) {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    EXPECT_EQ(sum, 15);
}