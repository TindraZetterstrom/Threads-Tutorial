// THREAD POOLING

// AN: I have no idea if we'll use this but Himothy gave it to me so I might as well write it down

//C++ does not have a built - in thread pool, but you can use third - party libraries like Boost or create one using std::vector<std::thread>

#include <iostream>
#include <vector>
#include <thread>

void task(int id)
{
	std::cout << "Task " << id << " is running \n";
}

int main()
{
	std::vector<std::thread> pool;
	for (int i = 0; i < 5; ++i)
	{
		pool.emplace_back(task, i);
	}

	for (auto& t : pool)
	{
		t.join();
	}
	return 0;
}