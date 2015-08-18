#include <iostream>

using namespace std;

float CtoF(float c)
{
	return c * 1.8 + 32.0;
}

int main()
{
	cout << "Please enter a celsius value: ";
	float celsius;
	cin >> celsius;
	cout << celsius << " degrees Celsius is " << CtoF(celsius) << " degrees Fahrenheit." << endl;
	return 0;
}
