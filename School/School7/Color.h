#pragma once
#include <iostream>
#include <string>
using namespace std;

class Color {
	int a, b, c;
public:
	Color() { a = b = c = 0; }
	Color(int a, int b, int c) { this->a = a; this->b = b; this->c = c; }
	void show() { cout << this->a << this->b << this->c; }
//	Color operator + (Color op2);	// temp7_1
	bool operator ==(Color op2);
	friend Color operator+(Color op1, Color op2);	// temp7_2
};
/*
Color Color::operator +(Color op2) {	// temp7_1
	Color tmp;
	tmp.a = this->a + op2.a; tmp.b = this->b + op2.b; tmp.c = this->c + op2.c;
	if (tmp.a >= 255) tmp.a = 255;
	if (tmp.b >= 255) tmp.a = 255;
	if (tmp.c >= 255) tmp.a = 255;
	return tmp;
}*/
bool Color::operator==(Color op2) {	
	if (a == op2.a && b == op2.b && c == op2.c) return true;
	else return false;
}

Color operator+(Color op1, Color op2) {	// temp7_2
	Color tmp;
	tmp.a = op1.a + op2.a;
	tmp.b = op1.b + op2.b;
	tmp.c = op1.c + op2.c;
	return tmp;
}
