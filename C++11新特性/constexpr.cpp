#include<iostream>
using namespace std;
/*
* constexpr��������
*	������ֻ����һ��return��䣨�м���������
*	�������뷵��ֵ��������void������
*	��ʹ��ǰ�������ж���
*	return���������ʽ�в���ʹ�÷ǳ������ʽ�ĺ�����ȫ�����ݣ��ұ�����һ���������ʽ
*/
/*
* constexpr���캯������
*	���������Ϊ��
*	��ʼ���б�ֻ���ɳ������ʽ����ֵ
*/
int getNUM1()
{
	return 3;
}
const int getNUM2()
{
	return 3;
}
constexpr int getNUM3()
{
	return 3;
}
//constexpr������ǳ������ʽ��int tmp��ֵ��Ӧ��ֻ���ǳ�������constexpr���θ������
constexpr int tmp = getNUM3();	
//tmpҲ�ǳ���
enum { e1 = tmp };
int main()
{
	//�������ʽ����һЩ�����ڱ���׶�
	//ö�ٳ�Ա��ʼ�������������γ���
	//����>>enum {e1=getNUM1(), e2 =1 };
	//����>>enum {e1=getNUM2(), e2 =1 };
	enum {e1=getNUM3(), e2 =1 };

	system("pause");
	return 0;
}