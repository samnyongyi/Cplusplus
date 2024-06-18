#include <iostream>
using namespace std;
class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }	// 가상함수
// virtual 키워드는 동적 바인딩 지시어이며 컴파일러에게 함수에 대한 호출 바인딩을 실행시간까지 미루도록 지시
};
class Derived :public Base {
public:
	virtual void f() { cout << "Derived::f()called" << endl; }	// 함수 오버라이딩, 함수 재정의
// 파생클래스에서 기본 클래스의 가상 함수와 동일한 이름의 함수 선언
// 기본 클래스의 가상 함수의 존재감 상실, 파생 클래스에서 오버라이딩한 함수가 호출되도록 동적바인딩, 다형성의 한 종류
};
int main() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f();

	Base* pBase;
	pBase = pDer;
	pBase->f();
}