#include <iostream>
#include "Rect.h"
using namespace std;
class Rect;	// Rect Ŭ������ ����Ǳ� ���� ���� �����Ǵ� ������ ������ �������� ����
bool equals(Rect r, Rect s);

bool equals(Rect r, Rect s) {	// �ܺ��Լ�
// private �Ӽ��� ���� width, height�� ���� ����
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}
int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}

