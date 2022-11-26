#pragma once
#include<iostream>
#include<fstream>
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
using namespace std;

#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	//���캯��
	WorkerManager();
	//չʾ�˵�
	void Show_Menu();
	//�˳�
	void exitSystem();
	//��¼ְ������
	int m_EmpNum;
	//ְ������ָ��
	Worker** m_EmpArray;
	//���ְ��
	void Add_Emp();
	//�����ļ�
	void save();
	//�ж��ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
	//ͳ���ļ�������
	int get_EmpNum();
	//��ʼ��Ա��
	void init_Emp();
	//��ʾ
	void Show_Emp();
	//ְ���Ƿ����
	int IsExist(int id);
	//ɾ��
	void Del_Emp();
	//�޸�
	void Mod_Emp();
	//����
	void Find_Emp();
	//����
	void Sort_Emp();
	//���
	void Clean_File();
	//��������
	~WorkerManager();
};