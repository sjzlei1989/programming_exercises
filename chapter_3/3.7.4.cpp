/*
编写一个程序，要求用户以整数方式输入秒数（试用 long或long long变量存储），然后以天、小时、
分钟和秒的方式显示这段时间。试用符号常量来表示每天有多少小时、每小时有多少分钟、每分钟有
多少秒。 
*/
#include <iostream>

using namespace std;

int main()
{
	const int HoursOfDay = 24;
	const int MinutesOfHour = 60;
	const int SecondsOfMinute = 60;
	const int SecondsOfDay = HoursOfDay * MinutesOfHour * SecondsOfMinute;
	const int SecondsOfHour = MinutesOfHour * SecondsOfMinute;
	
	int days;
	int hours;
	int minutes;
	int seconds;
	long long secCount;
	cout << "Enter the number of seconds: ";
	cin >> secCount;
	
	days = secCount / SecondsOfMinute / MinutesOfHour / HoursOfDay;
	hours = (secCount - days * SecondsOfDay) / SecondsOfMinute / MinutesOfHour;
	minutes = (secCount - days * SecondsOfDay - hours * SecondsOfHour) / MinutesOfHour;
	seconds = secCount - days * SecondsOfDay - hours * SecondsOfHour - minutes * SecondsOfMinute;
	cout << secCount << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;
	
}
