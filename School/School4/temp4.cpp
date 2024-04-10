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
	this->size = size;	// 각 객체 속의 this는 다른 객체의 this와 다르므로 주의
	p = new Circle[size];
	int radius; string name;
	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름>> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}
CircleManager::~CircleManager() { delete[] p; }
void CircleManager::searchByName() {
	string name;
	cout << "검색하고자 하는 원의 이름>> "; cin >> name;
	for (int i = 0; i < size; i++) if (p[i].getName() == name) {
		cout << name << "의 면적은" << p[i].getArea(); return;
	}
	cout << name << "원은 없습니다";
}
void CircleManager::searchByArea() {
	int count = 0, area=0;
	cout << "최소면적을 정수로 입력하세요>> "; cin >> area;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "의 면적은" << p[i].getArea() << ","; count++;
		}
	}
	cout<<"면적이"<<area<<"보다 큰 원은"<<count << "개 입니다" << endl;
}

