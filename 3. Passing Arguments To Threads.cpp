// PASSING ARGUMENTS TO THREADS

#include <iostream>
#include <thread>

void printMessage(const std::string& message)
{
	std::cout << message << '\n';
}

int main()
{
	std::string msg = "Hello from the main thread!";
	std::thread t(printMessage, std::ref(msg)); // pass by reference
	t.join();
	return 0;
}