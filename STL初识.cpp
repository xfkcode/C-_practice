#include<iostream>
#include<vector>
#include<Algorithm>
using namespace std;

void myprint(int val)
{
	cout << val << endl;
}
void test1()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	vector<int>::iterator itBegin = v.begin();//ָ��������һ������
	vector<int>::iterator itEnd = v.end();//ָ���������һ�����ݵ���һ��λ��

	//������1
	while (itBegin!=itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	//������2
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << endl;

	}

	//������3
	for_each(v.begin(), v.end(), myprint);

}
int main()
{
	test1();
	system("pause");
	return 0;
}