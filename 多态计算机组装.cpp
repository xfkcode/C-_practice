#include<iostream>
using namespace std;

//�������װ
//���������(��̬)
class CPU
{
public:
	virtual void calculate() = 0;
};
class VideoCard
{
public:
	virtual void display() = 0;
};
class Memory
{
public:
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
};
//Intel
class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "IntelCPU����" << endl;
	}
};
class IntelVC :public VideoCard
{
public:
	virtual void display()
	{
		cout << "IntelVC��ʾ" << endl;
	}
};
class IntelMEM :public Memory
{
public:
	virtual void storage()
	{
		cout << "IntelMem�洢" << endl;
	}
};
//Lenovo
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "LenovoCPU����" << endl;
	}
};
class LenovoVC :public VideoCard
{
public:
	virtual void display()
	{
		cout << "LenovoVC��ʾ" << endl;
	}
};
class LenovoMEM :public Memory
{
public:
	virtual void storage()
	{
		cout << "LenovoMem�洢" << endl;
	}
};

void test1()
{
	cout << "��һ̨����" << endl;
	//��һ���������
	CPU* Cpu = new IntelCPU;
	VideoCard* Vc = new IntelVC;
	Memory* Mem = new IntelMEM;
	//������һ̨����
	Computer* computer1 = new Computer(Cpu, Vc, Mem);
	computer1->work();
	delete computer1;
}
void test2()
{
	cout << "�ڶ�̨����" << endl;
	//�ڶ����������
	CPU* Cpu = new IntelCPU;
	VideoCard* Vc = new LenovoVC;
	Memory* Mem = new IntelMEM;
	//�����ڶ�̨����
	Computer* computer1 = new Computer(Cpu, Vc, Mem);
	computer1->work();
	delete computer1;
}
int main()
{
	test1();
	test2();
	return 0;
	system("pause");
}