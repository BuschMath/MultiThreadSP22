#include <iostream>
#include <thread>

using namespace std;

void Test(int i)
{
	cout << "Hello, this is thread: " << i << endl;
}

int main()
{
	thread t1 = thread(Test, 1);
	thread t2 = thread(Test, 2);

	cout << "Launching the threads!\n";

	t1.join();
	t2.join();

	return 0;
}