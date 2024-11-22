// You can capture everything by value ([=]) or by reference ([&]).

#include <iostream>

int main() {
    int a = 10, b = 20;

    auto sum = [=]() { return a + b; }; // Captures both `a` and `b` by value
    std::cout << "Sum: " << sum() << std::endl;

    auto modify = [&]() { a += 5; b += 10; }; // Captures both `a` and `b` by reference
    modify();
    std::cout << "Modified a: " << a << ", Modified b: " << b << std::endl;

    return 0;
}
