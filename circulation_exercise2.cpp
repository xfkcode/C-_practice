#include<iostream>
using namespace std;
//�����ӣ�7�ı�����%7=0����λ��7��%10=7��ʮλ��7��/10=7
int main()
{
	for (int i = 1;i <= 100;i++)
	{
		if (i % 7 == 7 || i % 10 == 7 || i / 10 == 7)      
		{
			cout << "������" << endl;
		}
	cout << i << endl;
	}

	system("pause");
	return 0;
}