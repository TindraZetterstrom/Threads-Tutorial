// A lambda that generates another lambda.

#include <iostream>

int main() {
    auto multiplier = [](int factor) {
        return [factor](int num) { return num * factor; };
    };

    auto doubleIt = multiplier(2);
    auto tripleIt = multiplier(3);

    std::cout << "5 doubled: " << doubleIt(5) << std::endl; // Output: 10
    std::cout << "5 tripled: " << tripleIt(5) << std::endl; // Output: 15

    return 0;
}
