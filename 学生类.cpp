#include<iostream>
#include<string>
using namespace std;

//ѧ����
class Student 
{
public:
	string m_name;
	string m_number;
	void Init()
	{
		cout << "������������" << endl;
		cin >> m_name;
		cout << "������ѧ�ţ�" << endl;
		cin >> m_number;
	}
	void show()
	{
		cout << "������" << m_name << endl;
		cout << "ѧ�ţ�" << m_number << endl;
	}
	void setName(string name)
	{
		m_name = name;
	}
	void setID(string id)
	{
		m_number = id;
	}
};

int main()
{
	Student s1;
	//s1.Init();
	string name;
	string ID;
	cout << "������������" << endl;
	cin >> name;
	cout << "������ѧ�ţ�" << endl;
	cin >> ID;
	s1.setName(name);
	s1.setID(ID);
	s1.show();
	return 0;
	system("pause");
}