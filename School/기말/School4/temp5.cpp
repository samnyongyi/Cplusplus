#include<iostream>
#include<fstream>
using namespace std;
long getFileSize(ifstream& fin) {
	fin.seekg(0, ios::end);	// get pointer�� ������ �ǳ����� �̵�
	long length = fin.tellg();	// get pointer�� ��ġ�� �ľ�	
	return length;	// length�� ������ ũ��� ����
}
int main() {
	const char* file = "C:\\Windows\\system.ini";
	ifstream fin(file);
	if (!fin) {	cout << file << "���� ����" << endl; return 0; }
	cout << file << "�� ũ��� " << getFileSize(fin) << "����Ʈ";
	fin.close();
}


