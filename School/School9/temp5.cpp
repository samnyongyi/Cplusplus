#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};
class ColorPoint :public Point {
	string color;
public:
	ColorPoint() :Point(0, 0) { this->color = "BLACK"; }
	ColorPoint(int x, int y) :Point(x, y) { this->color = "BLACK"; }
	ColorPoint(int x, int y, string c) :Point(x, y) { this->color = c; }
	void setpoint(int num, int num2) { move(num, num2); }
	void setColor(string c) { color = c; }
	void show() {
		string s = color + "색으로";
		string s2 = "에 위치한 점입니다";
		cout << s << "(" << getX() << "," << getY() << ")" << s2 << endl;
		//	cout << color << "색으로 (" << getX << getY << ")에 위치한 점입니다."; 
	}
};
int main() {
	ColorPoint zeroPoint;
	zeroPoint.show();

	ColorPoint cp(5, 5);
	cp.setpoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}



