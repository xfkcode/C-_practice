#include<iostream>
using namespace std;

int main()
{
	int a = 10;				//a��ֵ
	int&& b = std::move(a);	//����ֵת��λ��ֵ	
	cout << "c = " << endl;
	system("pause");
	return 0;
}