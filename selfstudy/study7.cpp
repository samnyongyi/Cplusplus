#include <iostream>
using namespace std;

int main() {
	cout << "�ּҸ� �Է��ϼ���>>";
	char address[100]; 

	cin.getline(address, 100, '\n'); // ���ڿ� �Է¹��2 (������ ����, �ִ����尡���� ����Ʈ, �Է��ߴ�), �ִ� 99���� ���ڸ� �о� address�迭�� ����, ���߿� enterŰ�� ������ �Է� �ߴ�(����Ʈ ���� \n�̱⿡ ��������), ��ĭ�� �־ �ϳ��� ���ڿ��� �ν�
	cout << "�ּҴ� " << address << "�Դϴ�\n"; 
}
