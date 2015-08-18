#include <iostream>

using namespace std;

void myTime(int h, int m)
{
	cout << "Time: " << h << ":" << m << endl;
}

int main()
{
	int hours, minutes;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	myTime(hours, minutes);
	return 0;
}
