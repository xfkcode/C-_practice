#include<iostream>
using namespace std;

//��ͨ����Ĭ�ϲ���
void func1(int a = 3) {}
//��ģ��Ĭ��ģ��������������������
template<class T1,class T2=int>
class A {};
//����ģ��Ĭ��ģ�����C++11����������Դ�������,Ҳ�ɴ�������
template<typename T1=int,typename T2>
void func2(T1 a,T2 b) {}

int main()
{

	system("pause");
	return 0;
}