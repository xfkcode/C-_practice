#include<iostream>
#include<type_traits>
using namespace std;

typedef int int32;
using my_int = int;

int  main()
{
	//is_same�ж����������Ƿ�һ��
	cout << is_same<int32, my_int>::value << endl;
	system("pause");
	return 0;
}
