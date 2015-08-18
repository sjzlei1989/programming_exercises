/*
编写一个小程序，要求用户使用一个证书指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。
该程序使用下划线字符来只是输入位置。另外，使用一个const符号常量来表示转换因子。 
*/
#include <iostream>

using namespace std;

int main()
{
	const int zhuanhuan = 12;
	int height;
	cout << "Enter your height in inches: ";
	cin >> height;
	cout << "Your height is " << height / 12 << " foots " << height % 12 << " inches.";
	
	return 0;
}
