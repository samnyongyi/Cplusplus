#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() { cout << "(" << x << "," << y << ")" << endl; }
};
class ColorPoint : public Point {	// 상속 표현
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};
void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();
}
int main() {
	Point p;
	ColorPoint cp;

	ColorPoint* pDer = &cp;	
	Point* pBase = pDer;	// 업캐스팅
	pDer->set(3, 4);
	pBase->showPoint();
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
	// pBase->showColorPoint();	// 컴파일 오류

	ColorPoint* pDer;
	Point* pBase = &cp;	// 업캐스팅
	pBase->set(3, 4);
	pBase->showPoint();
	pDer = (ColorPoint*)pBase;	// 다운캐스팅
	pDer->setColor("Red");
	pDer->showColorPoint();
}