#include <iostream>
#include <string>

using namespace std;

class Point{
	int x,y;
public:
	Point();
	Point(int a, int b);
	void show(){cout<<"("<<x<<","<<y<<")"<<endl;}
};

Point :: Point(): Point(0,0) {};	// ���� ������ 
// �⺻�����ڸ��� ���� �ڵ带 ���� �ۼ��ϴ� ��� �ٷ� ����
Point::Point(int a, int b)// Ÿ�� ������1
	:x(a),y(b){}
//Point::Point(int a int b) :x(A),y(b){}	// Ÿ�� ������2

int main(){
	Point origin;
	Point target(10,20);
	origin.show();
	target.show();	
	return 0;
}
