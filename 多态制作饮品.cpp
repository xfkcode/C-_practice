#include<iostream>
#include<string>
using namespace std;

//��̬������Ʒ
class AbstractDrinking
{
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void PutSomething() = 0;
	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
//��������
class Coffee :public AbstractDrinking
{
	virtual void Boil()
	{
		cout << "��ˮ��ũ��ɽȪ��" << endl;
	}
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};
//������
class Tee :public AbstractDrinking
{
	virtual void Boil()
	{
		cout << "��ˮ��ũ��ɽȪ��" << endl;
	}
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething()
	{
		cout << "�������" << endl;
	}
};

//��������
void dowork(AbstractDrinking* abs)
{
	abs->makeDrink();
	delete abs;
}
void test()
{
	dowork(new Coffee);
	cout << "-----------" << endl;
	dowork(new Tee);
}
int main()
{
	test();
	return 0;
	system("pause");
}