#include<list>
#include<iostream>
using namespace std;

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin();it != L.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
bool myCompare(int v1, int v2)
{
	return v1 > v2;
}
void test1()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);
	printList(L1);

	L1.reverse();
	printList(L1);
	//��֧��������ʣ�����ʹ�ñ�׼���㷨
	L1.sort();//Ĭ������
	printList(L1);

	L1.sort(myCompare);//����
	printList(L1);
}

int main()
{
	test1();
	system("pause");
	return 0;
}