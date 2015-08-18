/*
��дһ��С����Ҫ���Լ�Ӣ�߼�Ӣ��ķ�ʽ��������ߣ����԰�Ϊ��λ���������أ�ʹ��3������
���洢��Щ��Ϣ�����ó��򱨸���BMI��Body Mass Index������ָ������Ϊ�˼���BMI���ó�����Ӣ
��ķ�ʽָ���û�����ߣ�1Ӣ��Ϊ12Ӣ�磩��������Ӣ��Ϊ��λ�����ת��Ϊ����Ϊ��λ����ߣ�1Ӣ��
=0.0254�ף���Ȼ�󣬽��԰�Ϊ��λ������ת��Ϊ��ǧ��Ϊ��λ�����أ�1ǧ��=2.2��������󣬼���
��Ӧ��BMI�������أ�ǧ�ˣ�������ߣ��ף���ƽ�����÷��ų�����ʾ����ת�����ӡ� 
*/ 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const int inchToFoot = 12; //1 foot = 12 inches
	const float inchToMeter = 0.0254; //1 meter = 0.0254 inches;
	const float kgToPound = 2.2; //1 kg = 2.2 pounds;
	
	int height_feet;
	int height_inches;
	float height_meters;
	float weight_pounds;
	float weight_kg;
	float BMI;
	
	cout << "Enter your height feet: ";
	cin >> height_feet;
	cout << "Enter your height inches: ";
	cin >> height_inches;
	cout << "Enter your weight in pounds: ";
	cin >> weight_pounds;
	
	height_meters = (height_feet * inchToFoot + height_inches) * inchToMeter;
	weight_kg = weight_pounds / kgToPound;
	BMI = weight_kg / sqrt(height_meters);
	cout << "Your height is " << height_feet << " feet " << height_inches << " inches or " << height_meters << " meters." << endl;
	cout << "Your weight is " << weight_pounds << " pounds or " << weight_kg << " kg." << endl;
	cout << "Your BMI(Body Mass Index) is " << BMI << endl;
}

