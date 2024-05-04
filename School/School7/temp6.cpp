#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0) { this->kick = kick; this->punch = punch; }
	void show();
	Power operator +(int op2);	
};
void Power::show() {cout << "kick=" << kick << ',' << "punch=" << punch << endl;} 
Power Power::operator+(int op2) {	
	Power tmp;
	tmp.kick = this->kick + op2;
	tmp.punch = this->punch + op2;
	return tmp;
}

int main() {
	Power a(3, 5), b(4, 6), c;
	a.show();
	b.show();
	c = a + 2;
	a.show();
	c.show();
}