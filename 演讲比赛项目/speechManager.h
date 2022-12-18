#pragma once
#include"speaker.h"
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<string>
using namespace std;

class SpeechManager
{
public:
	//���캯��
	SpeechManager();
	//�˵�
	void ShowMenu();
	//�˳�ϵͳ
	void exitSystem();
	//��������
	~SpeechManager();
	//��ʼ����Ա
	void initSpeech();
	//����12��ѡ��
	void createSpeaker();
	
	//��ʼ����
	void starSpeech();
	//��ǩ
	void speechDraw();
	//����
	void speechContest();
	//��ʾ�÷�
	void showScore();
	//�����¼
	void saveRecord();
	//�鿴��¼
	void loadRecord();
	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;
	//��������¼������
	map<int, vector<string>>m_Record;
	//��ʾ����÷�
	void showRecord();
	//��ռ�¼
	void clearRecord();

	//��Ա����
	//��һ�ֱ������ֱ��
	vector<int>v1;
	//�ڶ��ֱ���ѡ�ֱ��
	vector<int>v2;
	//ʤ��ǰ����ѡ�ֱ��
	vector<int>vVictory;
	//��ű���Լ���Ӧ����ѡ������
	map<int, Speaker>m_Speaker;
	//��������
	int m_Index;
};