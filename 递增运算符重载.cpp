#include<iostream>
using namespace std;

//++���������
class MyInt
{
	friend ostream& operator<<(ostream& cout, MyInt integer);
public:
	MyInt()
	{
		m_num = 0;
	}
	//ǰ��++
	MyInt& operator++()
	{
		m_num++;
		return *this;
	}
	//����++
	MyInt operator++(int)
	{
		MyInt temp;
		m_num++;
		return temp;
	}
private:
	int m_num;
};
//ȫ�ֺ�������<<�����
ostream& operator<<(ostream& cout, MyInt integer)
{
	cout << integer.m_num;
	return cout;
}
int main()
{
	MyInt myint;
	cout << myint++ << endl;
	cout << myint << endl;
	MyInt myint1;
	cout << ++myint1 << endl;
	cout << myint1 << endl;
	return 0;
	system("pause");
}