#include <iostream>
#include "Circle.h"
using namespace std;
/*
int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() };
	for (int i = 0; i < 3; i++) cout << "Circle" << i << "�� ������" << circleArray[i].getArea() << endl;
}*/
/*
int main() {
	Circle circles[2][3];

	for (int i = 0, k = 1; i < 2; i++)
		for (int j = 0; j < 3; j++)
			circles[i][j].setRadius(k++);

	for(int i2=0; i2<2; i2++)
		for (int j2 = 0; j2 < 3; j2++) {
			cout << "Circle[" << i2 << "," << j2 << "]�� ������";
			cout << circles[i2][j2].getArea() << endl;
		}
}
*/
/*
int main() {
	int* p;

	p = new int;
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�";
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
	int *p=new int[5];	// new�� ����� �����Ҵ�, �� �޸𸮿� �Ҵ�, 5��� n���� n���� ���� �迭 �����Ҵ� ����(��, ����n�� ����Ǿ��־�� ����)
//	�迭�� �ƴϾ��ٸ� int *p=new int;	// int Ÿ���� �޸� �����Ҵ�
//	�����Ҵ�� �ʱ�ȭ�� ���� int *p=new int(20);	//20���� �ʱ�ȭ�� intŸ�� �Ҵ�
//	�迭�� ���� �Ҵ�� �ʱ�ȭ�� �Ұ��� int *p= new int[10](20);	// ������ ����
//	C������ malloc()/free()== C++������ new,  delete
	double total;
	int sum = 0;

	cout << "���� 5�� �Է�>>";
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
		
		sum += p[i];
		total = sum;
	}
	
	cout << "����� " << total / 5;
	delete[]p;	// ���� �Ҵ� �޴� �޸𸮿��� ���
//	�迭�� �ƴϾ��ٸ� delete p;
}
*/
/*
int main() {
	Circle* pArray = new Circle[3]; // 3���� Circle Ŭ���� ��ü �迭�� ��������

	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);
	for (int i = 0; i < 3; i++) { cout << pArray[i].getArea() << '\n'; }
	Circle* p = pArray; // ������ p�� �迭�� �ּҰ����� ����
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << '\n';
		p++; // 
	}
	delete[] pArray; // ��ü �迭 �Ҹ�
}*/

int main() {
	int num;
	Circle circle[3];
	int count = 0;

	for (int i = 0; i < 3; i++) {
		cout << "�� 1�� ������>>";
			cin >> num;
			circle[i] = { Circle(num) };
			Circle* p;
			p = circle;
			if ((*p).getArea() > 100) count++;	
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�";
}