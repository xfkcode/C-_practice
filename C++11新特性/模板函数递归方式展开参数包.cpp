#include<iostream>
using namespace std;
#if 0
//��ֹ�ݹ麯��1
// û�в�����ֹ
void debug()
{
	cout << "empty" << endl;
}
#endif

//��ֹ�ݹ麯��2
//����һ��������ֹ
template<typename T>
void debug(T tmp)
{
	cout << tmp << endl;
}
//�ɱ������ģ�庯��
//������չ������
template<typename T1,typename ... T2>
void debug(T1 first, T2 ... last)
{
	cout << first << endl;
	debug(last ...);
}

int main()
{
	debug(1,2,3,4);
	/*
	debug(1,2,3,4);
	debug(2,3,4);
	debug(3,4);
	debug(4); ��ֹ2
	debug();  ��ֹ1
	*/
	system("pause");
	return 0;
}