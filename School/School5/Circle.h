#pragma once
#include<iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	Circle(const Circle& c);
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};
