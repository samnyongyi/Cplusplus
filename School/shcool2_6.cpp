#include <iostream> 
using namespace std; 
class Circle {
public:
	int radius; 
	Circle(); 
	Circle(int r); 
	~Circle(); // 소멸자
//생성자처럼 구현해줘야 오류 미발생 
// 객체가 소멸되는 시점에서 자동으로 호출
// 오직 한번만 자동호출되며 임의로 후출 불가 
	double getArea();
}; 
Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}
double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut; 
	Circle pizza(30); 
	return 0;
}

