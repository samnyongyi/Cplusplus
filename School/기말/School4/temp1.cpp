#include<iostream>
#include<fstream>
using namespace std;
int main() {
	const char* file = "C:\\Windows\\system.ini";

	ifstream fin(file);
	if (!fin) {	cout << file << "���� ����" << endl; return 0;}
	int count = 0, c;
	while ((c = fin.get()) != EOF) {	// EOF�� ���� ������ ���Ͽ��� ���� �б�
		cout << (char)c;
		count++;
	}
	cout << "���� ����Ʈ ���� " << count << endl;	// \r\n�� \n �� ����Ʈ�� �����ϱ⿡ ���� ����Ʈ ������ ���� ����
	fin.close();	// ���ϴݱ�
}