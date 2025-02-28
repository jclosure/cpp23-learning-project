#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>

TEST(DataStructuresTest, VectorTest) {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    EXPECT_EQ(vec.size(), 5);
    EXPECT_EQ(vec[0], 1);
    vec.push_back(6);
    EXPECT_EQ(vec.back(), 6);
}

TEST(DataStructuresTest, MapTest) {
    std::map<std::string, int> myMap;
    myMap["one"] = 1;
    myMap["two"] = 2;
    EXPECT_EQ(myMap.size(), 2);
    EXPECT_EQ(myMap["one"], 1);
}

TEST(DataStructuresTest, SetTest) {
    std::set<int> mySet = {1, 2, 3};
    mySet.insert(4);
    EXPECT_TRUE(mySet.find(4) != mySet.end());
    EXPECT_EQ(mySet.size(), 4);
}

TEST(DataStructuresTest, UnorderedMapTest) {
    std::unordered_map<std::string, int> myUnorderedMap;
    myUnorderedMap["apple"] = 1;
    myUnorderedMap["banana"] = 2;
    EXPECT_EQ(myUnorderedMap.size(), 2);
    EXPECT_EQ(myUnorderedMap["banana"], 2);
}