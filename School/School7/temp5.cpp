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
Power& Power::operator+=(Power op2) {	// +=������ �ߺ�
	kick = kick + op2.kick;
	punch = punch + op2.punch;
	return *this;	// *this: �ڱ� �ڽ��� Ŭ���� �� ��ü(�ڱ��ڽ��� ���� ��Ÿ���� Ű����� �������� ��������)
// this: �ڱ� �ڽ��� ����Ű�� Ű����(������)
}

int main() {
	Power a(3, 5), b(4, 6), c;
	a.show();
	b.show();
	c = a += b;
	a.show();
	c.show();
}