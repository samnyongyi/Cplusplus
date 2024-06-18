#include <iostream>
using namespace std;

class A {
public:
	void func() { f(); }
	virtual void f() { cout <<  "¡°A::f() called¡±" << endl; }
};
class B : public A {
public:
	void f() { cout << "¡°B::f() called¡±" << endl; }
};
class C : public B {
public:
	void f() { cout << "¡°C::f() called¡±" << endl; }
}; 

int main() {
	C  c;
	c.f(); //(1)
	A* pa;
	B* pb;
	pa = pb = &c;
	pb->f(); //(2)
	pa->f(); //(3)
	pa->func(); //(4)
}