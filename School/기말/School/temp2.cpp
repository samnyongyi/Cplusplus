#include <iostream>
using namespace std;
class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }	// �����Լ�
// virtual Ű����� ���� ���ε� ���þ��̸� �����Ϸ����� �Լ��� ���� ȣ�� ���ε��� ����ð����� �̷絵�� ����
};
class Derived :public Base {
public:
	virtual void f() { cout << "Derived::f()called" << endl; }	// �Լ� �������̵�, �Լ� ������
// �Ļ�Ŭ�������� �⺻ Ŭ������ ���� �Լ��� ������ �̸��� �Լ� ����
// �⺻ Ŭ������ ���� �Լ��� ���簨 ���, �Ļ� Ŭ�������� �������̵��� �Լ��� ȣ��ǵ��� �������ε�, �������� �� ����
};
int main() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f();

	Base* pBase;
	pBase = pDer;
	pBase->f();
}