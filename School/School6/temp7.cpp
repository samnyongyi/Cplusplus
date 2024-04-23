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
	// static ��� �Լ��� non-static ����� ���� �Ұ��ϸ� static ��� �Լ�, ������ �Լ� ���� ������������ ���� ����
};
Circle::Circle(int r) {
	radius = r;
	numOfCircles++;
}
int Circle::numOfCircles = 0;

int main() {
	Circle *p = new Circle[10];	// Circle ��ü�迭 p�� �����Ҵ��ϰ� 10���� ���� ����
	cout << "�����ϰ� �ִ� ���� ����" << Circle::getNumOfCircles() << endl;	// 10
	delete[] p;
	cout << "�����ϰ� �ִ� ���� ����" << Circle::getNumOfCircles() << endl;	// 0
	Circle a;	// Circle(1) ȣ��
	cout << "�����ϰ� �ִ� ���� ����" << Circle::getNumOfCircles() << endl;	// 1
	Circle b;	// Circle(1) ȣ��
	cout << "�����ϰ� �ִ� ���� ����" << Circle::getNumOfCircles() << endl;
}