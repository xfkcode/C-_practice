#include<iostream>
#include<memory>			//����ָ��
using namespace std;

class A
{
public:
	~A()
	{
		cout << "��������" << endl;
	}
};
int main()
{
	unique_ptr<int> up1(new int(11));	//��������ָ�����up1��Ψһʹ����
	cout << "*up1 =" << *up1 << endl;

	
	{
		unique_ptr<A> up2(new A);		//�����ͷ�
		//��Ϊָ���ͷŶ����ռ�
		up2 = nullptr;					//1
		up2 = NULL;						//2
		up2.reset();					//3
		cout << "++++++++++++++++++++++++" << endl;
	}
	cout << "------------------------" << endl;

	//unique_ptr<int> up2 = up1;				//���ÿ�������
	unique_ptr<int> up2 = std::move(up1);		//up1ת��up2��up1������ʹ��
	cout << "*up2 = " << *up2 << endl;
	//cout << "*up1 = " << *up1 << endl;		//err

	unique_ptr<int> up3(new int(11));			
	up3.reset(new int(22));						//���ͷ�ԭ���������ݣ����¸�up1��һ���µĶ�������
	cout << "*up3 = " << *up3 << endl;

	unique_ptr<int> up4(new int(11));
	//�ͷſ���Ȩ�����ͷŶ����ڴ�
	int* p = up4.release();
	cout << *p << endl;
	//cout << "*up4 = " << *up4 << endl;		//err
	delete p;
	
	system("pause");
	return 0;

}
