#include<iostream>
using namespace std;

void func(int a)
{
	cout << "int a" << endl;
}
void func(int* a)
{
	cout << "int* a" << endl;
}
int main()
{
	int* p1 = NULL;
	int* p2 = 0;

	func(NULL);
	func(nullptr);
	//nullptrֻ�ܸ�ָ�븳ֵ
	system("pause");
	return 0;
}
