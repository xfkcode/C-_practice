#include<iostream>
#include<string>
using namespace std;

//�ṹ�尴��Ա����
struct hero
{
	string name;
	int age;
	string sex;
};
void Sort(struct hero hArr[], int len)
{
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - 1 - i;j++)
		{
			if (hArr[j].age > hArr[j + 1].age)
			{
				struct hero temp = hArr[j];
				hArr[j] = hArr[j + 1];
				hArr[j + 1] = temp;
			}
		}
	}
}
void PrintHero(struct hero hArr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << "Ӣ��������" << hArr[i].name << "���䣺" << hArr[i].age
			<< "�Ա�" << hArr[i].sex << endl;
	}
}
int main()
{
	struct hero hArr[5] =
	{
		{"����",23,"��"},
		{"����",24,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",18,"Ů"}
	};
	Sort(hArr, 5);
	PrintHero(hArr, 5);
	return 0;
	system("pause");
}