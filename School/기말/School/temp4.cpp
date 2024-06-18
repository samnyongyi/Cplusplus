#include <iostream>
using namespace std;
class Shape {
public:
	virtual void draw() {
		cout << "--Shape--";
	}
 };
class Circle : public Shape {
public:
	virtual void draw() {	
		Shape::draw();
		cout << "CIrcle" << endl;
	}
};

int main() {
	Circle circle;
	Shape* pShape = &circle;

	pShape->draw();	// ���� ���ε��� �����ϴ� ȣ��, --Shape--Circle
	pShape->Shape::draw();	// --Shape--
}