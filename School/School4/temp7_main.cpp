#include <iostream>
#include <string>
using namespace std;

int man() {
	string s;
	cout << "�������� ���ڿ��� �Է��ϼ���. �Է��� ���� %�����Դϴ�." << endl;
	getline(cin, s, '&');
	cin.ignore();	// &�ڿ� ������� EnterŰ�� �����ϱ� ���� �ڵ�
	string f, r;
	cout << endl << "find"; getline(cin, f, '\n');
	cout << "replace"; getline(cin, r, '\n');

	int startIndex = 0;
	while (true) {
		int fIndex = s.find(f, startIndex);	// s[0]���� ���ڿ� f �˻�
		if (fIndex == -1) break;	// ���ڿ� s�� ������ ����Ϸ�
		s.replace(fIndex, f.length(), r);	// fIndex���� ���ڿ� f�� ���̸�ŭ ���ڿ� r�� ����
		startIndex = fIndex + r.length();	// ������ ���̸�ŭ �ǳʶ� �ٽ� ã��
	}
	cout << s << endl;
}