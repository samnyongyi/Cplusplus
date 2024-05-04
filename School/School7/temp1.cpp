#include <iostream>
#include "Rect.h"
using namespace std;
class Rect;	// Rect 클래스가 선언되기 전에 먼저 참조되는 컴파일 오류를 막기위한 선언문
bool equals(Rect r, Rect s);

bool equals(Rect r, Rect s) {	// 외부함수
// private 속성을 가진 width, height에 접근 가능
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}
int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}

