#include<iostream>
using namespace std;
//�ҳ����������ֵ
int main()
{
	int arr[] = { 64,7,84,5,9,564,945 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int max = 0;
	for (int i = 0;i < len;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "���ֵΪ:" << max << endl;
	return 0;
	system("pause");
}