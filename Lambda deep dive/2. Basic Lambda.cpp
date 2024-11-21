#include <iostream>

int main() {
    auto greet = []() {
        std::cout << "Hello, World!\n";
    };

    greet(); // Invoke the lambda
    return 0;
}