// filepath: /Users/joelholder/learning/cpp23-learning-project/src/game/test_random_numbers.cpp
#include <gtest/gtest.h>
#include "game/random_numbers.h"

TEST(RandomNumberGeneratorTest, GetIntInRange)
{
    game::RandomNumberGenerator rng;
    int min = 1;
    int max = 10;
    for (int i = 0; i < 100; ++i)
    {
        int random_value = rng.get(min, max);
        EXPECT_GE(random_value, min);
        EXPECT_LE(random_value, max);
    }
}

TEST(RandomNumberGeneratorTest, GetFloatInRange)
{
    game::RandomNumberGenerator rng;
    float min = 0.0f;
    float max = 1.0f;
    for (int i = 0; i < 100; ++i)
    {
        float random_value = rng.get(min, max);
        EXPECT_GE(random_value, min);
        EXPECT_LE(random_value, max);
    }
}
