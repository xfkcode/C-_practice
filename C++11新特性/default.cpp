#include<iostream>
using namespace std;

class X
{
public:
	//�ñ������ṩһ��Ĭ�Ϲ��캯����������ʵ�֣�
	X() = default;
	//���ι��캯�������ṩĬ�Ϲ��캯��
	X(int i) :a(i) {}

	int a;
};
X::X() = default;
//default ֻ����������Ĭ���ṩ�Ĺ����Ա����
//�޲ι��졢�������졢��ֵ��������ء���������
int main()
{

	system("pause");
	return 0;
}