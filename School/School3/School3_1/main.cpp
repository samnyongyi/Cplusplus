#include <iostream>
#include <string>
#include "Circle.h"
using namespace std;

int main(int argc, char** argv) {
	Circle donut;
	double area = donut.getArea();
	cout << "donut�� ������" << area << "\n";

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza�� ������" << area << "\n";
	return 0;
}