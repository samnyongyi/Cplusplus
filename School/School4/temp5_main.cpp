#include <iostream>
#include<string>	
using namespace std;

int man() {
	string names[5];	// ���� ũ���� ���ڿ�
		
	for (int i = 0; i < 5; i++) {
		cout << "�̸�>> ";
		getline(cin, names[i], '\n');	// �Է¹��� ���ڿ���, ���ڿ��� �����ϰ�, �������� \n�� ���� 
	}
	string latter = names[0];
	for (int i = 1; i < 5; i++) {
		if (latter < names[i]) {
			latter = names[i];
		}
	}
	cout << "�������� ���� �ڿ� ������ ���ڿ��� " << latter << endl;
}