#include <iostream>

using namespace std;

int main()
{
	cout << "What is your first name? ";
	char fName[20];
	cin.getline(fName, 20);
	
	cout << "What is your last name? ";
	char lName[20];
	cin.getline(lName, 20);
	
	cout << "What letter grade do you deserve? ";
	char grade;
	cin >> grade;
	cout << "What is your age? ";
	int age;
	cin >> age;
	
	cout << "Name: " << fName << endl;
	cout << "Grade: " << (char)(grade + 1) << endl;
	cout << "Age: " << age << endl;
	
	return 0;
}
