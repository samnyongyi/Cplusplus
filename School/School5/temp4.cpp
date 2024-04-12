#include "Circle.h"

void readRadius(Circle &c) {
	int r;
	cout << "정수 값으로 반지름을 입력하세요>>";
	cin >> r;
	c.setRadius(r);
}

int main() {
	Circle donut;
	readRadius(donut);
	cout << "donut의 면적=" << donut.getArea() << endl;
}

