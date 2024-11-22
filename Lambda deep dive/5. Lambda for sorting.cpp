#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    std::sort(numbers.begin(), numbers.end(), [](int a, int b) { return a < b; });

    std::cout << "Sorted: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
