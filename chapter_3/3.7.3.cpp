/*
��дһ������Ҫ���û��Զȣ��֣���ķ�ʽ����һ��γ�ȣ�Ȼ���Զ�Ϊ��λ��ʾ��γ�ȡ�
1��Ϊ60�֣�1��Ϊ60�룬���Է��ų����ķ�ʽ��ʾ��Щֵ������ÿ������ֵ��Ӧʹ��һ��
�����ı����洢���� 
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
