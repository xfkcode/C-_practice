#include<iostream>
using namespace std;

//1.�ɱ����ģ������
//2.�ݹ�̳�ģ����
//3.�߽�����

template<class ... T> class Car {};

template<class Head,class ... Tail>
class Car<Head, Tail ...>:public Car<Tail...>
{
public:
	Car()
	{
		cout << "type = " << typeid(Head).name() << endl;
	}
};

template<> class Car<> {};

int main()
{
	Car<int, char*> bmw;
	system("pause");
	return 0;
}