// Using lambdas with std::for_each to iterate over a container.

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    std::for_each(nums.begin(), nums.end(), [](int num) {
        std::cout << "Number: " << num << std::endl;
    });

    return 0;
}
