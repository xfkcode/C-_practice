#include<iostream>
using namespace std;

//�ɱ����ģ�庯��
template<class ... T>			//Tģ�������
void func(T ... args) {
	cout << "num =" << sizeof... (args) << endl;
}		//args����������
int main()
{
	func<int>(10);
	func<int,int>(10,20);
	func<int,char>(10,'a');
	func<int, int&&, int>(10, 10, 19);
	system("pause");
	return 0;
}