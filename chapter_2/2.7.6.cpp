#include <iostream>

using namespace std;

void lytoau(double ly)
{
	cout << ly << " light years = " << ly * 63240 << " astronomical units." << endl;
}

int main()
{
	double ly;
	cout << "Enter the number of light years: ";
	cin >> ly;
	lytoau(ly);
	return 0;
}
