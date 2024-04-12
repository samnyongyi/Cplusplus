#include "Circle.h"

int main() {
	int i = 1;
	int n = 2;
	int& refn = n;	// 참조변수 선언, refn==n==2
	n = 4;
	refn++;	// refn==n==5

	int* p = &refn;	// p는 n의 주소를 저장
	*p = 20;	// refn==n==20
}