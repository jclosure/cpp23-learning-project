#include "random_numbers.h"

#include <iostream>
#include <random>
#include <string>

namespace game {

RandomNumberGenerator::RandomNumberGenerator() {
    generator = std::default_random_engine(
        std::chrono::system_clock::now().time_since_epoch().count());
}

template <typename T, typename>
T RandomNumberGenerator::get(T a, T b) {
    if constexpr (std::is_integral_v<T>) {
        std::uniform_int_distribution<T> distribution(a, b);
        return distribution(generator);
    } else {
        std::uniform_real_distribution<T> distribution(a, b);
        return distribution(generator);
    }
}

// Explicit template instantiation
template int RandomNumberGenerator::get(int, int);
template float RandomNumberGenerator::get(float, float);

}  // namespace game
