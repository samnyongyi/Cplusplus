#include <iostream>
#include <string>

using namespace std;

class Circle{	// 클래스 선언부, 클래스 이름은 관례적으로 대문자 
public:	// 멤버에 대한 접근 지정자 
	int radius;
	double getArea();
};	// 세미콜론으로 클래스 타입임을 표시 

double Circle :: getArea(){	// 클래스 구현부 
// 클래스를 다른 파일에서 활용하기 위해 클래스선언과 구현으로 분리하는 이유
	return 3.14*radius*radius;
}

int main(){
	Circle donut;	// 객체 생성 
	donut.radius = 1;	// donut 멤버 변수 접근 
	double area = donut.getArea();	// donut의 멤버 함수 호출 
	cout << "donut	면적은 "<< area<< endl;
	
	Circle pizza;
	pizza.radius = 30;
	area= pizza.getArea();
	cout << "pizza	면적은 "<< area<< endl;	 
	return 0;
}
