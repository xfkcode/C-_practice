#include<iostream>
#include"workerManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
using namespace std;

int main()
{
	////���Դ��룺
	//Worker* worker = NULL;
	//worker = new Employee(1, "����",1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "����", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "����", 3);
	//worker->showInfo();
	//delete worker;

	//ʵ���������߶���
	WorkerManager wm;
	
	int choice = 0;
	while(true)
	{
		wm.Show_Menu();
		cout << "���������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://�˳��������
			wm.exitSystem();
			break;
		case 1://����ְ����Ϣ
			wm.Add_Emp();
			break;
		case 2://��ʾְ����Ϣ
			wm.Show_Emp();
			break;
		case 3://ɾ����ְְ��
			wm.Del_Emp();
			break;
		case 4://�޸�ְ����Ϣ
			wm.Mod_Emp();
			break;
		case 5://����ְ����Ϣ
			wm.Find_Emp();
			break;
		case 6://���ձ������
			wm.Sort_Emp();
			break;
		case 7://��������ĵ�
			wm.Clean_File();
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}