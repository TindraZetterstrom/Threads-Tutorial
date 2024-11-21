// JOIN AND DETACH

// join() : Waits for the thread to finish before continuing.
// detach() : Allows the thread to run independently(daemon - like behavior).

#include <iostream>
#include <thread>
#include <chrono> // MORE RESEARCH PLS //////////////////////////////////////////// timer thingy???

void independentTask()
{
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << "Finished independent task!" << std::endl;
}

int main()
{
	std::thread t(independentTask);
	t.detach(); // Runs independently
	std::cout << "Main thread continues..." << std::endl;

	std::this_thread::sleep_for(std::chrono::seconds(3)); // ensure main doesn't end first
	return 0;
}