/*
��дһ������Ҫ���û�����ȫ��ǰ���˿ں�������ǰ���˿ڣ����������ҵ��˿ڣ���
����Щ��Ϣ�洢��long long�����У����ó�����ʾ���������������ң����˿�ռȫ��
�˿ڵİٷֱȡ� 
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
