#include <iostream>

int main() {
    auto add = [](int a, int b) -> int {
        return a + b;
        };

    std::cout << "5 + 3 = " << add(5, 3) << '\n';
    return 0;
}