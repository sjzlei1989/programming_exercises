/*
编写一个程序，要求用户输入全球当前的人口和美国当前的人口（或其他国家的人口）。
将这些信息存储在long long变量中，并让程序显示美国（或其他国家）的人口占全球
人口的百分比。 
*/

#include <iostream>

using namespace std;

int main()
{
	long long pow; //population of world
	long long pou; //population of USA
	cout << "Enter the world's population: ";
	cin >> pow;
	cout << "Enter the population of the USA: ";
	cin >> pou;
	float per = static_cast<float>(pou) / static_cast<float>(pow);
	cout << "The population of the USA is " << per * 100 << "% of the world population." << endl;
	return 0;
}
