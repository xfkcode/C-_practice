#pragma once
#include<iostream>
#include"worker.h"
using namespace std;

//boss
class Boss :public Worker
{
public:
	//���캯��
	Boss(int id, string name, int dId);
	//��ʾ������Ϣ
	virtual void showInfo();
	//���λ����
	virtual string getDeptName();
};