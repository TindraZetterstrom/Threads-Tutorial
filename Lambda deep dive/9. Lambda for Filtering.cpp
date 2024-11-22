// Filtering values from a collection using std::copy_if.

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> evenNumbers;

    std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(evenNumbers),
        [](int num) { return num % 2 == 0; });

    std::cout << "Even numbers: ";
    for (int num : evenNumbers) {
        std::cout << num << " ";
    }

    return 0;
}
