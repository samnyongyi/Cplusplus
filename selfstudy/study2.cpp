#include <iostream>
 
double area(int r);	// �Լ��� ���� ����

double area(int r){	// �Լ� ����
	return 3.14*r*r;
}

int main(){
	int n=3;
	char c='#';
	std::cout << c << 5.5 << '-' << n << "hello" << true;	// �������� << �����ڷ� ������ ��� ����, bool/char/short/int/long/float/double Ÿ�� �� ��� ����, true�� 1�� ���
	std::cout << "n+5=" << n+5 << '\n' << std::endl;;		// ����� ��� ����, \n, endl�� �ٹٲޱ���� ���������� �ణ�� ���� ����
	std::cout << "������" << area(n); 	// �Լ� ȣ�� ����
	return 0;
}
