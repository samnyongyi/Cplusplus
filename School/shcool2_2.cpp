#include <iostream>
#include <string>

using namespace std;

class Circle{	// Ŭ���� �����, Ŭ���� �̸��� ���������� �빮�� 
public:	// ����� ���� ���� ������ 
	int radius;
	double getArea();
};	// �����ݷ����� Ŭ���� Ÿ������ ǥ�� 

double Circle :: getArea(){	// Ŭ���� ������ 
// Ŭ������ �ٸ� ���Ͽ��� Ȱ���ϱ� ���� Ŭ��������� �������� �и��ϴ� ����
	return 3.14*radius*radius;
}

int main(){
	Circle donut;	// ��ü ���� 
	donut.radius = 1;	// donut ��� ���� ���� 
	double area = donut.getArea();	// donut�� ��� �Լ� ȣ�� 
	cout << "donut	������ "<< area<< endl;
	
	Circle pizza;
	pizza.radius = 30;
	area= pizza.getArea();
	cout << "pizza	������ "<< area<< endl;	 
	return 0;
}
