#include<iostream>
#include<vector>
using namespace std;

int main()
{
	/*
	* for(declaration:expression){
	*		ѭ����
	* }
	* declaration����ʾ�˴�Ҫ����һ���������ñ���������ΪҪ���������д洢Ԫ�ص�����
	* ����auto
	* expression����Ҫ���������У������������������{}��ʼ��������
	*/
	vector<int> v = { 1,2,3,4,5 };
	for (auto item : v)
		cout << item << " ";
	cout << endl;
	//���ÿ��޸�
	for (auto &item : v)
		item++;
	return 0;
}