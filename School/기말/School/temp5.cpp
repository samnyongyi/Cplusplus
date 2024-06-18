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

	delete dp;	// ~Derived() ~Base() 출력, Derived의 포인터로 소멸,
	delete bp;	// ~Derived() ~Base() 출력, Base의 포인터로 소멸, ~Base() 소멸자 호출/~Derived() 실행/~Base() 실행
}