#include<iostream>
using namespace std;

template<class T> class X {};
template<class T> class Y {};

int main()
{
	//C++11ǰ�������Ҽ�����֮������пո�
	Y<X<int> > obj;			
	Y<X<int>> obj;
	system("pause");
	return 0;
}