#include "Circle3.h"
#include "CircleManager.h"

void Circle::setCircle(string name, int radius){
	this->name = name; this->radius = radius;
}
string Circle::getName() {
	//string[] name;
	return name;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

CircleManager::CircleManager(int size) {
	this->size = size;	// �� ��ü ���� this�� �ٸ� ��ü�� this�� �ٸ��Ƿ� ����
	p = new Circle[size];
	int radius; string name;
	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������>> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}
CircleManager::~CircleManager() { delete[] p; }
void CircleManager::searchByName() {
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸�>> "; cin >> name;
	for (int i = 0; i < size; i++) if (p[i].getName() == name) {
		cout << name << "�� ������" << p[i].getArea(); return;
	}
	cout << name << "���� �����ϴ�";
}
void CircleManager::searchByArea() {
	int count = 0, area=0;
	cout << "�ּҸ����� ������ �Է��ϼ���>> "; cin >> area;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "�� ������" << p[i].getArea() << ","; count++;
		}
	}
	cout<<"������"<<area<<"���� ū ����"<<count << "�� �Դϴ�" << endl;
}

