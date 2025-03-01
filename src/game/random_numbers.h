#ifndef RANDOM_NUMBERS_H
#define RANDOM_NUMBERS_H

#include <chrono>
#include <iostream>
#include <random>
#include <type_traits>
#include <utility>

namespace game {

class RandomNumberGenerator {
   public:
    RandomNumberGenerator();

    template <typename T,
              typename = std::enable_if_t<std::is_same_v<T, float> ||
                                          std::is_same_v<T, int>>>
    T get(T a, T b);

   private:
    std::default_random_engine generator;
};

}  // namespace game

#endif  // RANDOM_NUMBERS_H