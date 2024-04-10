#include "Circle2.h"

int min() {
	cout << "생성하고자 하는 원의 개수?";
	int n, radius;
	cin  >> n;
	Circle* pArray = new Circle[n];	// 객체 배열의 동적생성 
	for (int i = 0; i < n; i++) {
		cout << "원" << i + 1 << ":";
		cin >> radius;
		pArray[i].setRadius(radius);
	}
	int count = 0;
	Circle* p = pArray;	// 포인터 p에 배열의 주소값을 설정
	for (int i = 0; i < n; i++) {	// 반복문을 이용하여 누수 메모리를 힙에 반환
		cout << p->getArea() << ' ';
		if (p->getArea() >= 100 && p->getArea() <= 200) count++;
		p++;	// 포인터p가 가리키는 주소를 포인터가 가리키는 자료형 크기만큼 증가
// 여기선 Circle 클래스의 크기만큼 증가시키며 다음 원소의 주소를 가리켜 접근 가능
	}
	cout << endl << "면적이 100에서 200사이인 원의 개수는 " << count << endl;

	delete[] pArray;	// 포인터변수가 가리키는 객체 배열 반환
}

