#include<iostream>
#include<string>
using namespace std;

//��̬������
class Abstract
{
public:
	//�����麯��
	virtual int getResult()
	{
		return 0;
	}
	int m_num1;
	int m_num2;
};
class Add:public Abstract
{
public:
	//������д
	int getResult()
	{
		return m_num1 + m_num2;
	}
};
class Sub :public Abstract
{
public:
	int getResult()
	{
		return m_num1 - m_num2;
	}
};

void test()
{
	//����ָ��ָ���������
	Abstract* abc = new Add;
	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << "�ӣ�" << abc->getResult() << endl;
	delete abc;

	abc = new Sub;
	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << "����" << abc->getResult() << endl;
	delete abc;
}
int main()
{
	test();
	return 0;
	system("paude");
}