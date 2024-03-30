#include <iostream>
#include <string>
#include "Circle.h"
using namespace std;

int main(int argc, char** argv) {
	Circle donut;
	double area = donut.getArea();
	cout << "donut의 면적은" << area << "\n";

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza의 면적은" << area << "\n";
	return 0;
}