#include "Circle2.h"

int min() {
	cout << "�����ϰ��� �ϴ� ���� ����?";
	int n, radius;
	cin  >> n;
	Circle* pArray = new Circle[n];	// ��ü �迭�� �������� 
	for (int i = 0; i < n; i++) {
		cout << "��" << i + 1 << ":";
		cin >> radius;
		pArray[i].setRadius(radius);
	}
	int count = 0;
	Circle* p = pArray;	// ������ p�� �迭�� �ּҰ��� ����
	for (int i = 0; i < n; i++) {	// �ݺ����� �̿��Ͽ� ���� �޸𸮸� ���� ��ȯ
		cout << p->getArea() << ' ';
		if (p->getArea() >= 100 && p->getArea() <= 200) count++;
		p++;	// ������p�� ����Ű�� �ּҸ� �����Ͱ� ����Ű�� �ڷ��� ũ�⸸ŭ ����
// ���⼱ Circle Ŭ������ ũ�⸸ŭ ������Ű�� ���� ������ �ּҸ� ������ ���� ����
	}
	cout << endl << "������ 100���� 200������ ���� ������ " << count << endl;

	delete[] pArray;	// �����ͺ����� ����Ű�� ��ü �迭 ��ȯ
}

