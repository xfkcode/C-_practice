#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Foo
{
public:
	Foo(int x) :m_x(x) {}		//���캯���б��ʼ��
	const int m_x;				//const���ͱ����ʼ��
};
class Point
{
public:
	Point(int x, int y) :m_x(x), m_y(y) {}
private:
	int m_x;
	int m_y;
};
int main()
{
	//1.���ʼ���б�
	//�����Դ�����ӣ����������κ����Ͷ���ĳ�ʼ��
	
	//2.{}��ʼ��
	//C++98������{}������Ԫ�س�ֵ�趨
	//C++11���ṩ{}�Ա�׼������ʼ��
	vector<int> v1 = { 1,2,3 };
	vector<int> v2{ 1,2,3 };
	map<int, int> m{ {1,2},{2,2} };
	//C++11���ṩ{}�Զ�̬�����ʼ��
	int* arr = new int[5] {1, 2, 3, 4, 5};
	//C++11���ṩ{}���Զ������͵��б��ʼ��
	Point p{ 1,2 };			//Point p(1,2);
	return 0;
}