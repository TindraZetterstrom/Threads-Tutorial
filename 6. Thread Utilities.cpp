// THREAD UTILITIES

// std::this_thread::sleep_for: Pause thread execution for a specified duration.
// std::this_thread::get_id : Get the current thread’s ID.

#include <iostream>
#include <thread>
#include <chrono>

void task()
{
	std::cout << "Task starts..." << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << "Task end after 2 seconds. \n";
}

int main()
{
	std::thread t(task);
	t.join();
	return 0;
}