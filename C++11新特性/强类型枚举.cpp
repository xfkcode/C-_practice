#include<iostream>
using namespace std;

int main()
{
	//ǿ����ö�٣�enum�������class��struct����
	enum class Status1 {OK,ERROR};
	enum struct Status2 {OK,ERROR};
	//ö�����͵�������
	Status1 flag = Status1::OK;
	//��ָ����Ա����������
	enum struct Status3 :char {OK,ERROR};
	cout << sizeof(Status3::OK) << endl;

	system("pause");
	return 0;
}