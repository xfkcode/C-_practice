#include<iostream>
using namespace std;

template<typename T>
void func(const T&)
{
	cout << "const T&" << endl;
}
template<typename T>
void func(T&)
{
	cout << "T&" << endl;
}
#if 0
template<typename T>
void forward_val(const T& tmp)
{
	func(tmp);
}
template<typename T>
void forward_val(T& tmp)
{
	func(tmp);
}
#endif
//ֻдһ���汾���漰�����۵�
template<typename T>
void forward_val(T&& tmp)
{
	func(std::forward<T>(tmp));
}
int main()
{
	//��Ҫ��һ�����ԭ�ⲻ���Ĵ��ݸ���һ������
	int a = 0;
	const int& b = 1;
	forward_val(a);
	forward_val(b);
	system("pause");
	return 0;
}