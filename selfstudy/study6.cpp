#include <iostream>
#include <cstring>	// C-��Ʈ������ ��Ī, strcmp()/strlen()/strcpy()�� ��� ����, <string.h>�� �ۼ����������� <cstring>�� C++ ǥ�ع��
using namespace std;	// strcmp()�Լ��� ����ϱ� ���� ��� ����

int main() {
	char password[11];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	while(true) {	// 1��� true ���
		cout << "��ȣ>>";
		cin >> password;
		if(strcmp(password, "1") == 0) {	// ���ڿ� ��
			break;
		}
		else cout << "��ȣ ����" << endl;
	}
	return 0
}
