#include "Circle.h"

int main() {
	int i = 1;
	int n = 2;
	int& refn = n;	// �������� ����, refn==n==2
	n = 4;
	refn++;	// refn==n==5

	int* p = &refn;	// p�� n�� �ּҸ� ����
	*p = 20;	// refn==n==20
}