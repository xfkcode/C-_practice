#include<iostream>
using namespace std;

int main()
{
	//�˷��ھ���
	for (int i = 1;i <= 9;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			cout << j << "*" << i << "=" << i * j << "\t";
		}
		cout << endl;
	}
	return 0;
	system("pause");
}