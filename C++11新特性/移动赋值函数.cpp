#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Mystring
{
public:
	//���캯��
	Mystring(char* tmp)
	{
		cout << "���캯��" << endl;
		this->_len = strlen(tmp);
		this->_str = new char[_len + 1];
		strcpy(_str, tmp);
	}
	//��������
	Mystring(const Mystring& s)
	{
		cout << "��������" << endl;
		_len = s._len;
		_str = new char[_len + 1];
		strcpy(_str, s._str);
	}
	//�ƶ����캯��
	Mystring(Mystring&& t)
	{
		cout << "�ƶ����캯��" << endl;
		_str = t._str;		//������ַ��û�����������ڴ�
		_len = t._len;
		t._str = nullptr;	//ԭ��ָ���ÿ�
	}
	//��ֵ���������
	Mystring& operator=(const Mystring& s)
	{
		cout << "��ֵ���������" << endl;
		if (&s == this)
		{
			return *this;
		}
		if (_str != NULL)
		{
			delete[] _str;
			_str = nullptr;
		}
		_len = s._len;
		_str = new char[_len + 1];
		strcpy(_str, s._str);
		return *this;
	}
	//�ƶ���ֵ����
	Mystring& operator=(Mystring&& s)
	{
		cout << "��ֵ���������" << endl;
		if (&s == this)
		{
			return *this;
		}
		if (_str != NULL)
		{
			delete[] _str;
			_str = nullptr;
		}
		_len = s._len;
		_str = s._str;
		s._str = nullptr;
		strcpy(_str, s._str);
		return *this;
	}
	//��������
	~Mystring()
	{
		cout << "��������" << endl;
		if (_str != NULL)
		{
			delete[] _str;
			_str = nullptr;
			cout << "�ͷſռ�" << endl;
		}
	}
private:
	char* _str;
	int _len;
};

Mystring  func()
{
	char s[] = "abcd";
	Mystring obj(s);
	return obj;
}

int main()
{
	char s[] = "aksjhdfkih";
	Mystring tmp(s);
	tmp = func();
	system("pause");
	return 0;
}
