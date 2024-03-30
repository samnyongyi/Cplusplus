#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	Circle circleArray[3];
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) 
		cout << "Circle" << i << "의 면적은" << circleArray[i].getArea() << endl;

	Circle* p;	//p는 객체 포인터 변수
	p = circleArray;	// circleArray[0]의 주소를 p에 저장
	for (int i = 0; i < 3; i++) {
		//'객체포인터변수.메소드()' 를 사용할때 .전까지 작성한 소스가 객체포인터변수인지 그저 포인터인지 확인
		cout << "Circle" << i << "의 면적은" << p[i].getArea() << endl;	//p[i]는 p포인터가 가리키는 배열의 i번째 요소에 접근하므로 결과는 객체, 이 객체는 Circle 클래스의 객체

	/*	컴파일에러를 발생시키는 소스
		cout << "Circle" << i << "의 면적은" << *(p[i]) << endl;	// C++에서 *보단 .이나 ->을 이용하여 클래스를 참조하는것이 일반적이며 *을 사용시 에러발생을 야기가능하므로 조심히 사용
		cout << "Circle" << i << "의 면적은" << *p[i].getArea() << endl;
		cout << "Circle" << i << "의 면적은" << *(p[i].getArea()) << endl;
		cout << *p[i];

		cout << "Circle" << i << "의 면적은" << ((*p) + i).getArea() << endl;	// *p+i는 p포인터가 가리키는 객체의 주소에 i를 더하므로 유효하지 않응 주소를 생성
		cout << "Circle" << i << "의 면적은" << p+i.getArea() << endl;	// i.getArea()는 존재 하지 않음

		cout << "Circle" << i << "의 면적은" << (p + i).getArea() << endl;	//p+i는 포인터에 정수 i를 더하므로 결과는 포인터
		cout << "Circle" << i << "의 면적은" << *(p + i).getArea() << endl;	
	*/
	/*	컴파일 되는 소스
		cout << "Circle" << i << "의 면적은" << p->getArea() << endl;
		cout << "Circle" << i << "의 면적은" << (*p).getArea() << endl;
		p++;	
	*/
		}
}