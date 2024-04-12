#include "Circle.h"

Circle::Circle() {
	radius = 1;
	cout << "积己磊 角青 radius= " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "积己磊 角青 radius= " << radius << endl;
}
Circle::~Circle() {
	cout << "家戈磊 角青 radius= " << radius << endl;
}
Circle::Circle(const Circle& c) {
	this->radius = c.radius;
	cout << "汗荤 积己磊 角青 radius= " << radius << endl;
}