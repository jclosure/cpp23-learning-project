#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>

namespace data_structure_examples {

void vector_example() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Vector elements: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

void map_example() {
    std::map<std::string, int> age_map = {{"Alice", 30}, {"Bob", 25}};
    std::cout << "Age of Alice: " << age_map["Alice"] << std::endl;
}

void set_example() {
    std::set<int> unique_numbers = {1, 2, 2, 3, 4};
    std::cout << "Unique numbers: ";
    for (const auto& num : unique_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void unordered_map_example() {
    std::unordered_map<std::string, int> name_map = {{"Alice", 30}, {"Bob", 25}};
    std::cout << "Bob's age: " << name_map["Bob"] << std::endl;
}

int run() {
    vector_example();
    map_example();
    set_example();
    unordered_map_example();
    return 0;
}

} // namespace data_structure_examples