#include "Dept.h"

void Dept::read() {
	cout << size << "�� ���� �Է�>> ";
	for(int i=0; i<size; i++) cin >> scores[i];	//scores[size] �Ұ�
}
bool Dept::isOver60(int index) {
	if(scores[index] >= 60) return true;
	else return false;
}
/*
Dept::Dept(const Dept& dept) {
	//this->scores = dept.scores;
	this->size = dept.size;
	this->scores = new int[dept.size];
	for (int i = 0; i < this->size; i++) {
		this->scores[i] = dept.scores[i];
	}
}*/
Dept::~Dept() {  delete[] scores; }
