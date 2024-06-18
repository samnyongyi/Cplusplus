#include<iostream>
using namespace std;

class Base {
public:
	virtual ~Base() { cout << "~Base()" << endl; }
};
class Derived : public Base {
public:
	virtual ~Derived() { cout << "~derived()" << endl; }
};
int main() {
	Derived* dp = new Derived();
	Base* bp = new Derived();	

	delete dp;	// ~Derived() ~Base() ���, Derived�� �����ͷ� �Ҹ�,
	delete bp;	// ~Derived() ~Base() ���, Base�� �����ͷ� �Ҹ�, ~Base() �Ҹ��� ȣ��/~Derived() ����/~Base() ����
}