#include <iostream>
#include <thread>

#define TIME_UNTIL_TAKEOFF 12
#define TAKEOFF 5

using namespace std;

/*
The function gets a message and a number of times to countdown and print to console the countdown down by 1s.
input: message and times to cpuntdown
*/
void countdown(char* msg,int times)
{
	for (int i = times; i > 0; i--)
	{
		cout << msg << i << "\t";
		this_thread::sleep_for(1s);
	}
}

/*
The function gets number of second to blinking and blinks the text on console.
input: number of second to blinking
*/
void blinking(int seconds,char *color1,char *color2)
{
	for (int i = 1; i<seconds; i++)
	{
		system(color1);
		std::this_thread::sleep_for(0.5s);
		system(color2);
		std::this_thread::sleep_for(0.5s);
	}
}

/*
A program that will show how many seconds are left until takeoff 
*/
int main()
{
	std::cout << "\n\n\n\n";
	countdown("\r\t\tTime until takeoff : ",TIME_UNTIL_TAKEOFF);
	std::cout << "\r\t\tTakeoff\t\t\t\t" << std::endl;
	blinking(TAKEOFF, "color 09", "color 0A");
	return 0;
}