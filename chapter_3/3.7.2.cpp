/*
编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重（使用3个变量
来存储这些信息）。该程序报告其BMI（Body Mass Index，体重指数）。为了计算BMI，该程序以英
寸的方式指出用户的身高（1英尺为12英寸），并将以英寸为单位的身高转换为以米为单位的身高（1英寸
=0.0254米）。然后，将以磅为单位的体重转换为以千克为单位的体重（1千克=2.2磅）。最后，计算
相应的BMI——体重（千克）除以身高（米）的平方。用符号常量表示各种转换因子。 
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

