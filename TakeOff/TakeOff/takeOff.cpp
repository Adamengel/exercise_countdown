#include <iostream>
#include <thread>
#include <chrono>

using namespace std; 

int main()
{
	for (int countDown = 12; countDown > 0; countDown--)
	{
		cout <<  "\rTime until takeoff: " << countDown <<"             \r";
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}

	for (int countDown = 5; countDown > 0; countDown--)
	{
		cout << "\rTakeoff!                       \r";
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		cout << "\r             \r";
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}

	cout << "\rTakeoff!" << endl;
	system("pause");
	return 0;
}