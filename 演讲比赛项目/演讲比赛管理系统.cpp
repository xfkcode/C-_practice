#include"speechManager.h"
#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	SpeechManager sm;

	////����12��ѡ�ִ���
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin();it != sm.m_Speaker.end();it++)
	//{
	//	cout << "ѡ�ֱ�ţ�" << it->first 
	//		 << "������" << it->second.m_Name 
	//		 << "������" << it->second.m_Score[0]
	//		 << endl;
	//}

	int choice = 0;
	while (true)
	{
		sm.ShowMenu();

		cin >> choice;
		switch (choice)
		{
		case 1://��ʼ����
			sm.starSpeech();
			break;
		case 2://�鿴���������¼
			sm.showRecord();
			break;
		case 3://��ձ�����¼
			sm.clearRecord();
			break;
		case 0://�˳�ϵͳ
			sm.exitSystem();
			break;
		default:
			system("cls");//����
			break;
		}
	}
	system("pause");
	return 0;
}