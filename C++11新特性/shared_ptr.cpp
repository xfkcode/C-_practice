#include<iostream>
#include<memory>			//����ָ��
using namespace std;

int main()
{
	shared_ptr<int> sp1(new int(11));				//��������ָ�����
	cout << "*up1 =" << *sp1 << endl;
	shared_ptr<int> sp2 = sp1;						//�������죬����������������ռ��

	//������
	cout << "num = " << sp2.use_count() << endl;
	sp1 = nullptr;									//��������һ
	cout << "num = " << sp2.use_count() << endl;

	sp2.reset();									//��������1��Ϊ0�ͷ��ڴ�
	cout << "num = " << sp2.use_count() << endl;
	//cout << "*up2 =" << *sp2 << endl;


	system("pause");
	return 0;

}
