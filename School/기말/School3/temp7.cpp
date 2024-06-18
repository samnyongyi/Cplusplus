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
	cout << "이름 암호>> "; cin >> name >> pw;
	passwordMap[name] = pw;
}
void PasswordManager::search() {
	string name, pw;
	cout << "이름? "; cin >> name;
	if (passwordMap.find(name) == passwordMap.end()) {
		cout << "등록 안됨" << endl; return;
	}
	cout << "암호?"; cin >> pw;
	if (pw == passwordMap[name])cout << "통과!!" << endl;
	else cout << "비밀번호 오류" << endl;
}
void PasswordManager::run() {
	int menu;
	cout << "암호관리 프로그램" << program << "를 시작합니다" << endl;
	while (true) {
		cout << "삽입:1,검사:2,종료:3>> "; cin >>menu;
		switch (menu) {
			case 1: add(); break;
			case 2: search(); break;
			case 3: cout << "프로그램을 종료합니다"; return;
		}
	}
}
int main() {
	PasswordManager mm("WHO");
	mm.run();
}