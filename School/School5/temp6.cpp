#include<iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
	for (int i = 0; i < strlen(a); i++) {	//strlen()���ڿ� ���� ���
		if (a[i] == c) {	
			success = true;	// *success�� �ȵǴ� ������ success�� �����Ͱ� �ƴ� ���̱� ����
			return a[i];
		}
	}
}

int main() {
	char s[] = "Mike";
	bool b = false;	// b�� ����
	char& loc = find(s, 'M', b);	// loc�� ���������� �ƴ� �����ͺ���
	/*
	char a = find(s, 'M', b);
	char& loc = a;	// loc�� ��������
	*/
	if (b == false) {
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}
	loc = 'm';	
	cout << s << endl;
}