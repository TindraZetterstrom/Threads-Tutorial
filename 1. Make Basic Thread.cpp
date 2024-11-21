// MAKE BASIC THREAD
void sayHello()
{
	std::cout << "Hello World!" << std::endl;
}

int main()
{
	std::thread t(sayHello); // launch a thread
	t.join(); // wait for thread to finish - DO MORE RESEARCH ///////////////////////////////////
	return 0;

}