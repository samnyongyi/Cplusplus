#include<iostream>
#include<string>
#include<map>
using namespace std;
class PasswordManager {
	string program;
	map<string, string> passwordMap;
	void add();
	void search();
public:
	PasswordManager(string);
	void run();
};
PasswordManager::PasswordManager(string program) { this->program = program; }
void PasswordManager::add() {
	string name, pw;
	cout << "�̸� ��ȣ>> "; cin >> name >> pw;
	passwordMap[name] = pw;
}
void PasswordManager::search() {
	string name, pw;
	cout << "�̸�? "; cin >> name;
	if (passwordMap.find(name) == passwordMap.end()) {
		cout << "��� �ȵ�" << endl; return;
	}
	cout << "��ȣ?"; cin >> pw;
	if (pw == passwordMap[name])cout << "���!!" << endl;
	else cout << "��й�ȣ ����" << endl;
}
void PasswordManager::run() {
	int menu;
	cout << "��ȣ���� ���α׷�" << program << "�� �����մϴ�" << endl;
	while (true) {
		cout << "����:1,�˻�:2,����:3>> "; cin >>menu;
		switch (menu) {
			case 1: add(); break;
			case 2: search(); break;
			case 3: cout << "���α׷��� �����մϴ�"; return;
		}
	}
}
int main() {
	PasswordManager mm("WHO");
	mm.run();
}