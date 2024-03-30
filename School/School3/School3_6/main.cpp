#include <iostream>
#include "Circle.h"
using namespace std;
/*
int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() };
	for (int i = 0; i < 3; i++) cout << "Circle" << i << "의 면적은" << circleArray[i].getArea() << endl;
}*/
/*
int main() {
	Circle circles[2][3];

	for (int i = 0, k = 1; i < 2; i++)
		for (int j = 0; j < 3; j++)
			circles[i][j].setRadius(k++);

	for(int i2=0; i2<2; i2++)
		for (int j2 = 0; j2 < 3; j2++) {
			cout << "Circle[" << i2 << "," << j2 << "]의 면적은";
			cout << circles[i2][j2].getArea() << endl;
		}
}
*/
/*
int main() {
	int* p;

	p = new int;
	if (!p) {
		cout << "메모리를 할당할 수 없습니다";
		return 0;
	}
	*p = 5;
	int n = *p;
	cout << "*p=" << *p << '\n';
	cout << "n=" << n << '\n';

	delete p;
}
*/
/*
int main() {
	int *p=new int[5];	// new를 사용한 동적할당, 힙 메모리에 할당, 5대신 n으로 n개의 정수 배열 동적할당 가능(단, 변수n은 선언되어있어야 가능)
//	배열이 아니었다면 int *p=new int;	// int 타입의 메모리 동적할당
//	동적할당시 초기화는 가능 int *p=new int(20);	//20으로 초기화된 int타입 할당
//	배열은 동적 할당시 초기화가 불가능 int *p= new int[10](20);	// 컴파일 에러
//	C언어에서의 malloc()/free()== C++에서는 new,  delete
	double total;
	int sum = 0;

	cout << "정수 5개 입력>>";
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
		
		sum += p[i];
		total = sum;
	}
	
	cout << "평균은 " << total / 5;
	delete[]p;	// 동적 할당 받는 메모리에만 사용
//	배열이 아니었다면 delete p;
}
*/
/*
int main() {
	Circle* pArray = new Circle[3]; // 3개의 Circle 클래스 객체 배열의 동적생성

	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);
	for (int i = 0; i < 3; i++) { cout << pArray[i].getArea() << '\n'; }
	Circle* p = pArray; // 포인터 p에 배열의 주소값으로 설정
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << '\n';
		p++; // 
	}
	delete[] pArray; // 객체 배열 소멸
}*/

int main() {
	int num;
	Circle circle[3];
	int count = 0;

	for (int i = 0; i < 3; i++) {
		cout << "원 1의 반지름>>";
			cin >> num;
			circle[i] = { Circle(num) };
			Circle* p;
			p = circle;
			if ((*p).getArea() > 100) count++;	
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다";
}