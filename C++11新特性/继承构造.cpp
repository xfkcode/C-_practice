#include<iostream>
using namespace std;

class A
{
public:
	A(int x, int y)
	{
		this->a = x;
		this->b = y;
	}
protected:
	int a;
	int b;
};
class B :public A
{
public:
#if 0
	//ͨ�������б�����๹�캯������
	B(int x, int y)
		:A(x, y)
	{

	}
#endif
	//�̳й��죨�ȼۣ�
	using A::A;
	void display()
	{
		cout << "a =" << a << ",b = " << b << endl;
	}
	//û�������µĳ�Ա����
};

int main()
{
	//C++11����������̳л���Ĺ��캯����Ĭ�Ϲ��졢�������졢�ƶ�������⣩
	B obj(10, 20);
	obj.display();
	system("pause");
	return 0;
}