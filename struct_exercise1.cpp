#include<iostream>
#include<string>
#include<ctime>
using namespace std;

struct Student
{
	string sname;
	int score;
};
struct Teacher
{
	string tname;
	struct Student StuArr[5];
};
//��ֵ
void allocatSpace(struct Teacher TeaArr[], int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0;i < len;i++)
	{
		TeaArr[i].tname = "Teacher_";
		TeaArr[i].tname += nameSeed[i];

		for (int j = 0;j < 5;j++)
		{
			TeaArr[i].StuArr[j].sname = "Student_";
			TeaArr[i].StuArr[j].sname += nameSeed[j];
			int random = rand() % 61 + 40;//40-100
			TeaArr[i].StuArr[j].score = random;
		}
	}
}
//��ӡ
void PrintInfo(struct Teacher TArr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << "��ʦ��������" << TArr[i].tname << endl;
		for (int j = 0;j < 5;j++)
		{
			cout << "\tѧ��������" << TArr[i].StuArr[j].sname << "���Է�����"
				<< TArr[i].StuArr[j].score << endl;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	struct Teacher TeaArr[3];
	allocatSpace(TeaArr, 3);
	PrintInfo(TeaArr,3);
	return 0;
	system("pause");
}