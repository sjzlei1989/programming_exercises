/*
编写一个程序，要求用户以度，分，秒的方式输入一个纬度，然后以度为单位显示该纬度。
1度为60分，1分为60秒，请以符号常量的方式表示这些值。对于每个输入值，应使用一个
独立的变量存储它。 
*/
#include <iostream>

using namespace std;

int main()
{
	const int DegToMin = 60;
	const int MinToSec = 60;
	
	float degrees;
	float minutes;
	float seconds;
	float arcInDeg;
	
	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	arcInDeg = degrees + (seconds / MinToSec + minutes) / DegToMin;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
	cout << arcInDeg << " degrees." << endl;
}
