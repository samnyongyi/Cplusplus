#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { this->kick = kick; this->punch = punch; }
	void show();
	Power operator+(Power op2);	// +연산자 함수 선언, 리턴타입 operator연산자(매개변수리스트)
	friend Power operator+(int op1, Power op2);	
// 연산자 함수 구현 방법 2가지:	클래스의 멤버함수로 구현, 외부 함수로 구현하고 클래스에 프렌드 함수로 선언
};
void Power::show() {cout << "kick=" << kick << ',' << "punch=" << punch << endl;}
Power Power::operator+(Power op2) {	
	Power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}

int main() {
	Power a(3, 5), b(4, 6), c;
	c = a + b;	// 객체 a의 operator+()멤버 함수 호출
	a.show();
	b.show();
	c.show();
}
