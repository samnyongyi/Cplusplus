#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream fin("c:\\windows\\system.ini");
	if (!fin) {	cout << "c:\\windows\\system.ini ���� ����" << endl; return 0; }

	char buf[81];	// istream�� getline() �Լ� �̿�, �� ������ �ִ� 80���� ���ڷ� ����
	while (fin.getline(buf, 81)) {	// �� ������ �ִ� 80���� ���ڷ� ����, ���� \0 ���� �߰�
		cout << buf << endl;	
	}
	
	/* �����Լ� getline(ifstream& fin, string& line) �Լ� �̿��� �ۼ��ϴ� ���
	string line;
	ifstream fin("���ϰ��");
	while (getline(fin, line)) {	// �� ������ �о� line�� ����, ���ϳ����� �ݺ�
		...	// ���� ������ Ȱ���ϴ� �ڵ� �ۼ�
	} */
	fin.close();
}

