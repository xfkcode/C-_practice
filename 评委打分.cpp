#include<vector>
#include<deque>
#include<Algorithm>
#include<string>
#include<iostream>
#include<ctime>
using namespace std;

//5��ѡ�֣�10λ��ί���
//
class Person
{
public:
	Person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	string m_name;
	int m_score;
};
void createPerson(vector<Person>&v)
{
	string nameSeed = "ABCDE";
	for (int i = 0;i < 5;i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];
		int score = 0;

		Person p(name, score);
		v.push_back(p);
	}
}
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		deque<int>d;
		for (int i = 0;i < 10;i++)
		{
			int score = rand() % 41 + 60;//60-100
			d.push_back(score);
		}
		cout << "ѡ�֣�" << it->m_name << "��֣�" << endl;
		for (deque<int>::iterator dit = d.begin();dit != d.end();dit++)
		{
			cout << (*dit) << " ";
		}
		cout << endl;
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		int sum = 0;
		for (deque<int>::iterator dit = d.begin();dit != d.end();dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();
		it->m_score = avg;
	}
}
void showScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "������" << it->m_name << "�÷֣�" << it->m_score << endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	//����5��ѡ��
	vector<Person>v;
	createPerson(v);
	////����
	//for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	//{
	//	cout << "������" << (*it).m_name << "������" << (*it).m_score << endl;
	//}
	//��5��ѡ�ִ��
	setScore(v);
	//��ʾ���÷�
	showScore(v);
	system("pause");
	return 0;
}