#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};
