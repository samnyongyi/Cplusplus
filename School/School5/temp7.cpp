#include "Circle.h"

int main() {
	Circle src(30);
	Circle dest(src);

	cout << "������ ����= " << src.getArea() << endl;
	cout << "�纻�� ����= " << dest.getArea() << endl;
}