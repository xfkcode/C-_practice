#include<iostream>
using namespace std;

//������
class rectangle
{
public:
	//���ӿ�
	void setL(double l)
	{
		m_l = l;
		return;
	}
	double getL()
	{
		return m_l;
	}
	//��ӿ�
	void setW(double w)
	{
		m_w = w;
		return;
	}
	double getW()
	{
		return m_w;
	}
	bool isequal(rectangle& r)
	{
		if (m_l == r.getL() && m_w == r.getW())
			return true;
		return false;
	}
private:
	double m_l;
	double m_w;
};
int main()
{
	rectangle r1;
	double l;
	double w;
	cout << "���������1��" << endl;
	cin >> l;
	cout << "���������1��" << endl;
	cin >> w;
	r1.setL(l);
	r1.setW(w);
	rectangle r2;
	cout << "���������2��" << endl;
	cin >> l;
	cout << "���������2��" << endl;
	cin >> w;
	r2.setL(l);
	r2.setW(w);
	bool ret = r1.isequal(r2);
	cout << "�Ƿ����" << ret << endl;
	return 0;
	system("pause");
}