#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstring>
using namespace std;

class String
{
public:
	String(const char* str = "")
	{
		cout << "String(const char* str)" << endl;
		if (nullptr == str)
			str = "";
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}
	String(const String& s) :_str(new char[strlen(s._str) + 1])
	{
		cout << "String(const String& s)" << endl;
		strcpy(_str, s._str);
	}
#if 0
	//�ƶ����캯����ǳ������
	String(String&& t)		//s(tmp) s�����ڹ����ʱ���ܹ�ʹ��tmp�����ʱ�����е�_str��ָ��Ŀռ�
	{
		cout << "String(String&& t)" << endl;
		_str = t._str;
		t._str = nullptr;	//���ͷſռ䣬ת����һ������
	}
#endif
	//�ȼ�
	String(String&& t) :_str(move(t._str))
	{
		cout << "String(String&& t)" << endl;
	}
	String& operator=(const String& s)
	{
		cout << "String& operator=(const String& s)" << endl;
		if (this != &s)
		{
			char* pTemp = new char[strlen(s._str) + 1];
			strcpy(pTemp, s._str);
			delete[] _str;
			_str = pTemp;
		}
		return *this;
	}
	~String()
	{
		cout << "~String()" << endl;
		if (_str)
			delete[] _str;
	}
	friend ostream& operator<<(ostream& out, const String& t)
	{
		out << t._str;
		return out;
	}
private:
	char* _str;
};
String getString(const char* str)
{
	String tmp(str);
	return tmp;
}
int main()
{
	//��ֵ�����Ի�ȡ��ַ�ı��ʽ�����Գ����ڸ�ֵ������ߣ�const���β��ɸ�ֵ��
	//��ֵ���޷���ȡ��ַ�Ķ����г���ֵ����������ֵ��lambda���ʽ��
	//�޸���ֵ��Ҫ��ֵ����
	int a = 10;			//a����ֵ��10����ֵ
	auto b = a;			//a��b������ֵ��a������ֵʹ��
	//��ֵ����
	int num = 100;
	int& num1 = num;
	//��ֵ����
	//�﷨������&& ���ñ������� = ��ֵ;
	int&& num2 = 10;
	//����int&& num3 = num;	��ֵ������ֵ����
	//��ֵ����ʵ��Ӧ��
	//1.�ƶ�����
	//����ʱ�������Դת�Ƶ���һ�������������̿���һ���ڴ�
	String s(getString("hello"));
	/*���н����
	String(const char* str)
	String(const String & s)
	~String()
	String(const String & s)
	~String()
	~String()
	*/
	
	/*����ƶ����캯�����н���� 
	String(const char* str)
	String(String&& t)
	~String()
	String(String&& t)
	~String()
	~String()
	*/

	//2.move()����
	//��һ����ֵǿ��ת��Ϊ��ֵ���ã�ͨ����ֵ����ʹ�ø�ֵ��ʵ���ƶ�����
	return 0;
}