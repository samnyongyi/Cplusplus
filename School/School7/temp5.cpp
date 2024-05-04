#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0) { this->kick = kick; this->punch = punch; }
	void show();
	Power& operator+=(Power op2);
	friend Power operator+(int op1, Power op2);
};
void Power::show() {cout << "kick=" << kick << ',' << "punch=" << punch << endl;}
Power& Power::operator+=(Power op2) {	// +=연산자 중복
	kick = kick + op2.kick;
	punch = punch + op2.punch;
	return *this;	// *this: 자기 자신의 클래스 그 자체(자기자신의 값을 나타내는 키워드로 포인터의 참조개념)
// this: 자기 자신을 가리키는 키워드(포인터)
}

int main() {
	Power a(3, 5), b(4, 6), c;
	a.show();
	b.show();
	c = a += b;
	a.show();
	c.show();
}