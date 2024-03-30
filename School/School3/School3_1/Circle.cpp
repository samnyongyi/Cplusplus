#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle() {
	radius = 1;
	cout << "반지름" << radius << "원 생성\n";
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름" << radius << "원 생성\n";
}

double Circle::getArea() { return 3.14 * radius * radius; }