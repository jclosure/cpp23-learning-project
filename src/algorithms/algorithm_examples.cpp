#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

namespace algorithm_examples
{

    void demonstrateSort()
    {
        std::vector<int> numbers = {5, 3, 8, 1, 2};
        std::sort(numbers.begin(), numbers.end());
        std::cout << "Sorted numbers: ";
        for (const auto &num : numbers)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    void demonstrateFind()
    {
        std::vector<int> numbers = {5, 3, 8, 1, 2};
        auto it = std::find(numbers.begin(), numbers.end(), 3);
        if (it != numbers.end())
        {
            std::cout << "Found number: " << *it << std::endl;
        }
        else
        {
            std::cout << "Number not found." << std::endl;
        }
    }

    void demonstrateAccumulate()
    {
        std::vector<int> numbers = {1, 2, 3, 4, 5};
        int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
        std::cout << "Sum of numbers: " << sum << std::endl;
    }

    int run()
    {
        demonstrateSort();
        demonstrateFind();
        demonstrateAccumulate();
        return 0;
    }

} // namespace algorithm_examples