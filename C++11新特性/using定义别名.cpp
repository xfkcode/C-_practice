#include<iostream>
#include<map>
using namespace std;

int main()
{
	//typedef�ض���һ������
	typedef void(*function)(int, int);		//����ָ�����Ͷ���
	typedef double db;
	typedef std::map<std::string, int> map_str_int;
	//using �������
	using function = void(*)(int, int);		//����ָ�����Ͷ���
	using db = double;
	using map_str_int = std::map<std::string, int>;
	return 0;
}