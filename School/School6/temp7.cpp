#include<iostream>
using namespace std;
class Circle {
private:
	static int numOfCircles;
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; }
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCircles() { return numOfCircles; }	
	// static 멤버 함수는 non-static 멤버에 접근 불가하며 static 멤버 함수, 변수와 함수 내의 지역변수에만 접근 가능
};
Circle::Circle(int r) {
	radius = r;
	numOfCircles++;
}
int Circle::numOfCircles = 0;

int main() {
	Circle *p = new Circle[10];	// Circle 객체배열 p를 동적할당하고 10개의 원을 생성
	cout << "생존하고 있는 원의 개수" << Circle::getNumOfCircles() << endl;	// 10
	delete[] p;
	cout << "생존하고 있는 원의 개수" << Circle::getNumOfCircles() << endl;	// 0
	Circle a;	// Circle(1) 호출
	cout << "생존하고 있는 원의 개수" << Circle::getNumOfCircles() << endl;	// 1
	Circle b;	// Circle(1) 호출
	cout << "생존하고 있는 원의 개수" << Circle::getNumOfCircles() << endl;
}