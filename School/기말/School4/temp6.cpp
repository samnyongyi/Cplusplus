#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char name[10], dept[20];
	int sid;
	cout << "�̸�>> ";
	cin >> name;
	cout << "�й�>> ";
	cin >> sid;
	cout << "�а�>> ";
	cin >> dept;
	ofstream fout("C:\\Temp\\student.txt");
	if (!fout) {
		cout << "c:\\temp\\student.txt ������ ���� ����";
		return 0;
	}
	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;
	fout.close();

	ifstream fin;
	fin.open("C:\\Temp\\student.txt");
	if (!fin) {
		cout << "������ �� �� ����";
		return 0;
	}

	fin >> name;
	fin >> sid;
	fin >> dept;
	cout << name << endl;
	cout << sid << endl;
	cout << dept << endl;
	fin.close();
}