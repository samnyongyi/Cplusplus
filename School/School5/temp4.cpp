#include "Circle.h"

void readRadius(Circle &c) {
	int r;
	cout << "���� ������ �������� �Է��ϼ���>>";
	cin >> r;
	c.setRadius(r);
}

int main() {
	Circle donut;
	readRadius(donut);
	cout << "donut�� ����=" << donut.getArea() << endl;
}

