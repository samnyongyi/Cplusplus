#include "Circle.h"

int man() {
	int radius;
	while (true) {
		cout << "���� ������ �Է�(�����̸� ����)>> ";
		cin >> radius;
		if (radius < 0)break;
		Circle* p = new Circle(radius);	// ��ü�� ���� ������ ����
		/*
		Circle d
		Circle *p;	// ��ü�� ���� ������ ����
		p=&d;	// �����Ϳ� ��ü�ּ� ����
		*/
		cout << "���� ������" << p->getArea() << endl;	// �����ͷ� ����� �����Ҷ��� ���
		delete p;
	}
}
