#include<iostream>
using namespace std;

void* getmalloc(int size)
{
	return malloc(size);
}
int main()
{
	//decltype �����Ƶ���RTTI����ʱ����ʶ��
	//1.���ݱ��ʽ������Ϊ�����Ķ�������
	short a = 100;
	short b = 100;
	decltype(a + b) c;		//int
	cout << "c:" << typeid(c).name() << endl;

	int num = 0;
	decltype(num) x;
	const int& r = num;
	decltype(r) y = num;	//��ʼ��
	//2.���ݺ�������ֵ����
	cout << typeid(decltype(getmalloc)).name() << endl;		//�����������Ƶ�
	cout << typeid(decltype(getmalloc(0))).name() << endl;	//����������ֵ�����Ƶ�
	return 0;
}