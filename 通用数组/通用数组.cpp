#include"MyArray.hpp"
using namespace std;

void printIntArray(MyArray <int>&arr)
{
	for (int i = 0;i < arr.getSize();i++)
	{
		cout << arr[i] << endl;
	}
}
void test1()
{
	MyArray <int>arr1(5);

	for (int i = 0;i < 5;i++)
	{
		arr1.Push_Back(i);
	}

	cout << "arr1��" << endl;
	printIntArray(arr1);

	cout << "arr1������" << arr1.getCapacity() << endl;
	cout << "arr1��С��" << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);
	cout << "arr2��" << endl;
	printIntArray(arr2);

	arr2.Pop_Back();
	cout << "arr2βɾ��" << endl;
	cout << "arr2������" << arr2.getCapacity() << endl;
	cout << "arr2��С��" << arr2.getSize() << endl;
	
	MyArray<int>arr3(100);
	arr3 = arr1;
}

class Person
{
public:
	Person() {};
	Person(string name,int age)
	{
		this->m_name = name;
		this->m_age = age;
	} 
	string m_name;
	int m_age;
};
void printPersonArray(MyArray <Person>& arr)
{
	for (int i = 0;i < arr.getSize();i++)
	{
		cout << "������" << arr[i].m_name << "\t���䣺" << arr[i].m_age << endl;
	}
}
void test2()
{
	MyArray<Person> arr(10);

	Person p1("���", 999);
	Person p2("����",30);
	Person p3("槼�",20);
	Person p4("����",25);
	Person p5("������",27);

	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	printPersonArray(arr);

	cout << "arr������" << arr.getCapacity() << endl;
	cout << "arr��С��" << arr.getSize() << endl;

}
int main()
{
	test1();
	test2();
	system("pause");
	return 0;
}