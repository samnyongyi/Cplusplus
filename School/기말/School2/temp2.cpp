#include <iostream>
using namespace std;

class LoopAdder {
	string name;
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string name = "") {
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public: 
	void run();
};

 void LoopAdder::read(){
	 cout << name << ":" << endl;
	 cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ���>>";
	 cin >> x >> y;
 }
 void LoopAdder::write() {
	 cout << x << "���� " << y << "������ �� = " << sum << "�Դϴ�" << endl;
 }
 void LoopAdder::run() {
	 read();
	 sum = calculate();	// ���� ���� ���
	 write();
 }

 class WhileLoopAdder : public LoopAdder {
 protected:
	 int calculate() {
		 int sum = 0;
		 int i = getX();
		 while (i <= getY()) {
			 sum += i;
			 i++;
		 }
		 return sum;
	 }
 public:
	WhileLoopAdder(string name):LoopAdder(name) {}
 };
 class DoWhileLoopAdder : public LoopAdder {
 protected:
	 int calculate() {
		 int sum = 0;
		 int i = getX();
		 if (i > getY())return 0;
		 do {
			 sum += i;
			 i++;
		 } while (i <= getY());
		 return sum;
	 }
 public:
	 DoWhileLoopAdder(string name):LoopAdder(name) {}
 };

 int main() {
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");

	whileLoop.run();
	doWhileLoop.run();
}