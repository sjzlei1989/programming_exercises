/*
��дһ������Ҫ���û���������ʽ�������������� long��long long�����洢����Ȼ�����졢Сʱ��
���Ӻ���ķ�ʽ��ʾ���ʱ�䡣���÷��ų�������ʾÿ���ж���Сʱ��ÿСʱ�ж��ٷ��ӡ�ÿ������
�����롣 
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
