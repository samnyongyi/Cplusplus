#include <iostream>
#include <string>

using namespace std;

class Circle{
public:
	int radius;
	Circle();	// �⺻ ������
	//�����ڰ� ��õǾ����� ������ �ڵ����� ���������� �ϳ��� ��ý� �ڵ����� �������� �����Ƿ� �ۼ� �ʿ� 
	// �������� �̸��� Ŭ���� �̸��� ���� 
	Circle(int r);	// �Ű� ������ ���� ������ 
	double getArea();	// �Լ� 
};

Circle::Circle(){	// �Ű������� ���� ��� ����Ǵ� ������ 
	radius =1;
	cout<< "������"<<radius<<"������"<<endl;
}
Circle::Circle(int r){	// �Ű������� ������� ����Ǵ� ������ 
	radius =r;
	cout<<"������"<<radius<<"������"<<endl; 
}
double Circle::getArea(){return 3.14*radius*radius;}	// Ŭ���� ������ 

int main(){
	Circle donut;
	double area = donut.getArea();
	cout<<"donut ������ "<< area<<endl;
	
	Circle pizza(30);
	area= pizza.getArea();
	cout<<"pizza ������ "<<area<<endl; 
	return 0;
}
