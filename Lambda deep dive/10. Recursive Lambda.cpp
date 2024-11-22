// Defining a recursive lambda requires a little workaround since lambdas don’t have names by default.

#include <iostream>
#include <functional> // Required for std::function

int main() {
    std::function<int(int)> factorial = [&](int n) {
        return (n <= 1) ? 1 : n * factorial(n - 1);
    };

    std::cout << "Factorial of 5: " << factorial(5) << std::endl;

    return 0;
}
