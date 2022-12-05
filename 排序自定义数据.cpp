#include<iostream>
#include<string>
#include<list>
using namespace std;
//��������������ͬ���߽���
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};
bool comparePerson(Person&p1,Person&p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
}
void test1()
{
	list<Person>L;
	Person p1("����", 20, 175);
	Person p2("����", 15, 160);
	Person p3("����", 15, 180);
	Person p4("����", 10, 175);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);

	for (list<Person>::iterator it = L.begin();it != L.end();it++)
	{
		cout << "������" << it->m_Name
			<< "���䣺" << it->m_Age
			<< "��ߣ�" << it->m_Height << endl;
	}
	cout << "------------------------" << endl;
	cout << "�����" << endl;

	L.sort(comparePerson);
	for (list<Person>::iterator it = L.begin();it != L.end();it++)
	{
		cout << "������" << it->m_Name
			<< "���䣺" << it->m_Age
			<< "��ߣ�" << it->m_Height << endl;
	}
}
int main()
{
	test1();
	system("pause");
	return 0;
}