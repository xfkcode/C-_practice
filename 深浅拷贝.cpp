#include<iostream>
using namespace std;

class Person
{
public:
	int m_age;
	int* m_height;
	Person()
	{
		cout << "Ĭ�Ϲ���" << endl;
	}
	Person(int age, int height)
	{
		m_age = age;
		m_height = new int(height);
		cout << "�вι���" << endl;
	}
	Person(const Person& p)
	{
		m_age = p.m_age;
		//m_height = p.m_height; //Ĭ��ǳ����
		m_height = new int(*p.m_height);
		cout << "��������" << endl;
	}
	~Person()
	{
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "��������" << endl;
	}
};

void test()
{
	Person p1(18, 160);
	cout << "p1���䣺" << p1.m_age << "��ߣ�" << *p1.m_height << endl;
	Person p2(p1);
	cout << "p2���䣺" << p2.m_age << "��ߣ�" << *p2.m_height << endl;
}
//��ǳ����
int main()
{
	test();
	return 0;
	system("pause");
}