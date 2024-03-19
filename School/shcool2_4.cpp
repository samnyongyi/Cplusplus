#include <iostream>
#include <string>

using namespace std;

class Circle{
public:
	int radius;
	Circle();	// 기본 생성자
	//생성자가 명시되어있지 않으면 자동으로 생성되지만 하나라도 명시시 자동으로 생성되지 않으므로 작성 필요 
	// 생성자의 이름은 클래스 이름과 동일 
	Circle(int r);	// 매개 변수를 지닌 생성자 
	double getArea();	// 함수 
};

Circle::Circle(){	// 매개변수가 없을 경우 실행되는 생성자 
	radius =1;
	cout<< "반지름"<<radius<<"원생성"<<endl;
}
Circle::Circle(int r){	// 매개변수가 있을경우 실행되는 생성자 
	radius =r;
	cout<<"반지름"<<radius<<"원생성"<<endl; 
}
double Circle::getArea(){return 3.14*radius*radius;}	// 클래스 구현부 

int main(){
	Circle donut;
	double area = donut.getArea();
	cout<<"donut 면적은 "<< area<<endl;
	
	Circle pizza(30);
	area= pizza.getArea();
	cout<<"pizza 면적은 "<<area<<endl; 
	return 0;
}
