#include <iostream>
#include <fstream>
using namespace std;
int main() {
	const char* srcFile = "C:\\temp.jpg";
	const char* destFile = "C:\\temp.jpg";
	ifstream fsrc(srcFile, ios::in | ios::binary);	// �ҽ� ���� ����
	if (!fsrc) { cout << srcFile << " ���� ����" << endl; return 0;	}
	ofstream fdest(destFile, ios::out | ios::binary);	// �������� ����
	if (!fdest) { cout << destFile << " ���� ����" << endl; return 0; }
	
	char buf[1024];
	while (!fsrc.eof()) { // ���� ������ �б�, �ҽ� ���Ͽ��� ���� ���Ϸ� �����ϱ�
		fsrc.read(buf, 1024); // �ִ� 1024 ����Ʈ�� �о� �迭 s�� ����
		int n = fsrc.gcount(); // ���� ���� ����Ʈ �� �˾Ƴ���
		fdest.write(buf, n); // ���� ����Ʈ �� ��ŭ ���ۿ��� ���� ���Ͽ� ���
// read()/write()�� ��� ������ ���� �����
	}
	/*
	int c;
	while((c=fsrc.get()) != EOF) { // �ҽ� ������ ������ �� ����Ʈ�� �б�
		fdest.put(c); // ���� ����Ʈ�� ���Ͽ� ���
// get()/put()�� ���� Ȥ�� ����Ʈ ������ ���� �����
	}*/

	cout << srcFile << "�� " << destFile << "�� ���� �Ϸ�" << endl;
	fsrc.close(); fdest.close();
}