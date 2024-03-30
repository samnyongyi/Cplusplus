#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	Circle circleArray[3];
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) 
		cout << "Circle" << i << "�� ������" << circleArray[i].getArea() << endl;

	Circle* p;	//p�� ��ü ������ ����
	p = circleArray;	// circleArray[0]�� �ּҸ� p�� ����
	for (int i = 0; i < 3; i++) {
		//'��ü�����ͺ���.�޼ҵ�()' �� ����Ҷ� .������ �ۼ��� �ҽ��� ��ü�����ͺ������� ���� ���������� Ȯ��
		cout << "Circle" << i << "�� ������" << p[i].getArea() << endl;	//p[i]�� p�����Ͱ� ����Ű�� �迭�� i��° ��ҿ� �����ϹǷ� ����� ��ü, �� ��ü�� Circle Ŭ������ ��ü

	/*	�����Ͽ����� �߻���Ű�� �ҽ�
		cout << "Circle" << i << "�� ������" << *(p[i]) << endl;	// C++���� *���� .�̳� ->�� �̿��Ͽ� Ŭ������ �����ϴ°��� �Ϲ����̸� *�� ���� �����߻��� �߱Ⱑ���ϹǷ� ������ ���
		cout << "Circle" << i << "�� ������" << *p[i].getArea() << endl;
		cout << "Circle" << i << "�� ������" << *(p[i].getArea()) << endl;
		cout << *p[i];

		cout << "Circle" << i << "�� ������" << ((*p) + i).getArea() << endl;	// *p+i�� p�����Ͱ� ����Ű�� ��ü�� �ּҿ� i�� ���ϹǷ� ��ȿ���� ���� �ּҸ� ����
		cout << "Circle" << i << "�� ������" << p+i.getArea() << endl;	// i.getArea()�� ���� ���� ����

		cout << "Circle" << i << "�� ������" << (p + i).getArea() << endl;	//p+i�� �����Ϳ� ���� i�� ���ϹǷ� ����� ������
		cout << "Circle" << i << "�� ������" << *(p + i).getArea() << endl;	
	*/
	/*	������ �Ǵ� �ҽ�
		cout << "Circle" << i << "�� ������" << p->getArea() << endl;
		cout << "Circle" << i << "�� ������" << (*p).getArea() << endl;
		p++;	
	*/
		}
}