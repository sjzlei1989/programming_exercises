/*
��дһ��С����Ҫ���û�ʹ��һ��֤��ָ���Լ�����ߣ���λΪӢ�磩��Ȼ�����ת��ΪӢ�ߺ�Ӣ�硣
�ó���ʹ���»����ַ���ֻ������λ�á����⣬ʹ��һ��const���ų�������ʾת�����ӡ� 
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
