#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//���������(α���)
	int num = rand() % 100 + 1;//1-100�����
	//cout << num << endl;
	//��Ҳ���
	int val = 0;
	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ���¶���" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}