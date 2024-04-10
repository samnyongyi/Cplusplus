#include "Circle.h"

int man() {
	int radius;
	while (true) {
		cout << "정수 반지름 입력(음수이면 종료)>> ";
		cin >> radius;
		if (radius < 0)break;
		Circle* p = new Circle(radius);	// 객체에 대한 포인터 선언
		/*
		Circle d
		Circle *p;	// 객체에 대한 포인터 선언
		p=&d;	// 포인터에 객체주소 저장
		*/
		cout << "원의 면적은" << p->getArea() << endl;	// 포인터로 멤버를 접근할때의 경우
		delete p;
	}
}
