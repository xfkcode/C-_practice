#include<iostream>
#include<string>
using namespace std;

//��Ԫ
class Building;
class GoodGay
{
public:
	GoodGay();
	void visit();
	Building * building;
};
class Building
{
	friend void goodGay(Building* building);//ȫ�ֺ�����Ԫ
	friend class GoodGay;//����Ԫ
	friend void GoodGay::visit();//���Ա������Ԫ
public:
	Building();
	string m_SittingRoom;
private:
	string m_BedRoom;
};

Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
GoodGay::GoodGay()
{
	this->building = new Building;
}
void GoodGay::visit()
{
	cout << building->m_SittingRoom << endl;
	cout << building->m_BedRoom << endl;
}

void goodGay(Building *building)
{
	cout << building->m_SittingRoom << endl;
	cout << building->m_BedRoom << endl;
}

void test1()
{
	Building building;
	goodGay(&building);
}
void test2()
{
	GoodGay gg;
	gg.visit();
}
int main()
{
	test1();
	test2();
	return 0;
	system("pause");
}