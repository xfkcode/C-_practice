#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//1.auto �����÷�
	auto n = 10;
	auto f = 12.8;
	auto p = &n;
	//������������������
	//�Ƶ������ж����ԣ�ͬһ�����ͣ�
	auto a = 10, b = 20;
	//auto ע�⣺�����ʼ��
	// ����ʾ�� auto x;
	//auto ע�⣺������������ʹ��auto
	// ����ʾ�� void func(auto x){}
	//auto ע�⣺���ܶ�������
	// ����ʾ�� auto str[] = data;
	//2.auto Ӧ��
	//stl���������
	vector<int>v = { 1,2,3,4,5 };
	for (auto it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	return 0;
}