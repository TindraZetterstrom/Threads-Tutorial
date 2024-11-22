// Passing a lambda to a function.

#include <iostream>
#include <functional>

void executeCallback(const std::function<void()>& callback) {
    callback();
}

int main() {
    executeCallback([]() { std::cout << "Callback executed!" << std::endl; });
    return 0;
}
