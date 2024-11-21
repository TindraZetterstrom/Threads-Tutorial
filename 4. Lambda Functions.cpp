// LAMBDA FUNCTIONS
// DIVE EVEN DEEPER WITH THIS ONE

#include <iostream>
#include <thread>

int main()
{
	std::thread t(
		[]
		{
			std::cout << "Hello from lambda thread!" << std::endl;
		}
	);
	
	t.join();
	return 0;
}