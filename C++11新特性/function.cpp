#include<iostream>
#include<functional>
using namespace std;

//1.��ͨ����
void func()
{
	cout << __func__ << endl;
}
//2.���о�̬����
class Test
{
public:
	static int test_func(int a)
	{
		cout << __func__ << "(" << a << ") ->:";
		return a;
	}
};
//2.���зº���
class Func
{
public:
	int operator()(int a)
	{
		cout << __func__ << "(" << a << ") ->:";
		return a;
	}
};
int main()
{
	function<void(void)> f1 = func;
	f1();

	function<int(int)> f2 = Test::test_func;
	cout << f2(10) << endl;

	Func obj;
	function<int(int)> f3 = obj;
	cout << f3(22) << endl;

	//�ô���ʵ�ֺ����ص�
	//�����ں���ָ�룬���ܱȽ���Ȼ���ȣ���������NULL��nullptr�Ƚ�
	system("pause");
	return 0;
}