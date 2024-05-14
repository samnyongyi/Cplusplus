#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() { cout << "(" << x << "," << y << ")" << endl; }
};
class ColorPoint : public Point {	// ��� ǥ��
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
	Point* pBase = pDer;	// ��ĳ����
	pDer->set(3, 4);
	pBase->showPoint();
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
	// pBase->showColorPoint();	// ������ ����

	ColorPoint* pDer;
	Point* pBase = &cp;	// ��ĳ����
	pBase->set(3, 4);
	pBase->showPoint();
	pDer = (ColorPoint*)pBase;	// �ٿ�ĳ����
	pDer->setColor("Red");
	pDer->showColorPoint();
}