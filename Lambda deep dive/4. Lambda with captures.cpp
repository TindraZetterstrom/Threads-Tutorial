

//4. Lambda with captures
//
//Lambdas can capture variables from their surrounding scope.
//
//By Value([=]) : Captures a copy of external variables.
//By Reference([&]) : Captures a reference to external variables.

#include <iostream>

int main() {
    int x = 10, y = 20;

    // By value
    auto addValue = [=]() {
        return x + y; // Captures copies of x and y
        };

    // By reference
    auto addReference = [&]() {
        x++; // Modifies x in the outer scope
        return x + y;
        };

    std::cout << "Add by value: " << addValue() << '\n'; // 30
    std::cout << "Add by reference: " << addReference() << '\n'; // 31
    return 0;
}
