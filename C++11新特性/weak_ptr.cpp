#include<iostream>
#include<memory>			//����ָ��
using namespace std;

int main()
{
	shared_ptr<int> sp1(new int(11));				//��������ָ�����
	shared_ptr<int> sp2 = sp1;						//�������죬����������������ռ��
	
	weak_ptr<int> wp1 = sp1;						//���Ͷ�����

	cout << "num =" << sp1.use_count() << endl;
	cout << "num =" << wp1.use_count() << endl;

	shared_ptr<int> sp3 = wp1.lock();				//lock������ȡshared_ptr<int>����

	cout << "num =" << sp1.use_count() << endl;
	cout << "num =" << wp1.use_count() << endl;

	cout << *sp1 << " " << *sp2 << " " << *sp3 << endl;
	//cout << *wp1 << endl;							//err

	sp1 = nullptr;
	sp2 = nullptr;
	sp3 = nullptr;
	cout << "num =" << sp1.use_count() << endl;
	cout << "num =" << wp1.use_count() << endl;

	shared_ptr<int> tmp = wp1.lock();				//�������ͷţ���ȡnullptr
	if (tmp == nullptr)
	{
		cout << "�����ռ��Ѿ��ͷ�" << endl;
	}

	system("pause");
	return 0;
}
