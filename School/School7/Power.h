#pragma once
#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { this->kick = kick; this->punch = punch; }
	void show();
//	Power operator+(Power op2);	// temp4
//	Power& operator+=(Power op2);	//temp5
//	Power operator +(int op2);	// temp 6
	friend Power operator+(Power op1, Power op2);	// temp8
/*	Power& operator++ ();	// temp9
	Power operator++ (int x);*/
	friend Power operator+(int op1, Power op2);
};
void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
} /*
Power Power::operator+(Power op2) {	// temp 4
	Power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}*/
/*
Power& Power::operator+=(Power op2) {	//temp5
	kick = kick + op2.kick;
	punch = punch + op2.punch;
	return *this;
}*/
/*
Power Power::operator+(int op2) {	// temp 6
	Power tmp;
	tmp.kick = this->kick + op2;
	tmp.punch = this->punch + op2;
	return tmp;
}*/
/*
Power operator+(Power op1, Power op2) {	//temp8
	Power tmp;
	tmp.kick = op1.kick + op2.kick;
	tmp.punch = op1.punch + op2.punch;
	return tmp;
}*/
/*	temp9
Power& Power::operator++() {	
	kick++; punch++; return *this;
}
Power Power::operator++(int x) {
	Power tmp = *this; kick++; punch++;
	return tmp;
}*/
Power operator+(int op1, Power op2) {
	Power tmp;
	tmp.kick = op1 + op2.kick;
	tmp.punch = op1 + op2.punch;
	return tmp;
}