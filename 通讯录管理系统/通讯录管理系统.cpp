#include"headerfile.h"
using namespace std;

//�˵�
void showMenu()
{
	cout << "********************" << endl;
	cout << "*****  1.���  *****" << endl;
	cout << "*****  2.��ʾ  *****" << endl;
	cout << "*****  3.ɾ��  *****" << endl;
	cout << "*****  4.����  *****" << endl;
	cout << "*****  5.�޸�  *****" << endl;
	cout << "*****  6.���  *****" << endl;
	cout << "*****  0.�˳�  *****" << endl;
	cout << "********************" << endl;
}

int main()
{
	//����ͨѶ¼
	Addressbooks abs;
	//��ʼ��
	abs.m_Size = 0;

	int select = 0;
	while (true)
	{
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1://1.���
			addPerson(&abs);
			break;
		case 2://2.��ʾ
			showPerson(&abs);
			break;
		case 3://3.ɾ��
			deletePerson(&abs);
			break;
		case 4://4.����
			findPerson(&abs);
			break;
		case 5://�޸�
			modifyPerson(&abs);
			break;
		case 6://���
			clearPerson(&abs);
			break;
		case 0:
			cout << "��ӭ�´�ʹ��>_<" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}