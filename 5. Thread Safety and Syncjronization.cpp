
// THREAD SAFETY AND SYNCHRONIZATION

//When multiple threads access shared resources, synchronization tools are needed to prevent race conditions.
// The <mutex> library provides std::mutex for this purpose.

// MULTIPLE THREADS!!!!

#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void printNumbers(int id)
{
	for (int i = 0; i < 5; ++i)
	{
		std::lock_guard<std::mutex> lock(mtx); // Locks mutex for this scope
		std::cout << "Thread " << id << ": " << i << std::endl;
	}
}

int main()
{
	std::thread t1(printNumbers, 1);
	std::thread t2(printNumbers, 2);

	t1.join();
	t2.join();
	return 0;
}