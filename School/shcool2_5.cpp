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

Point :: Point(): Point(0,0) {};	// 위임 생성자 
// 기본생성자만을 위한 코드를 따로 작성하는 대신 바로 연결
Point::Point(int a, int b)// 타겟 생성자1
	:x(a),y(b){}
//Point::Point(int a int b) :x(A),y(b){}	// 타겟 생성자2

int main(){
	Point origin;
	Point target(10,20);
	origin.show();
	target.show();	
	return 0;
}
