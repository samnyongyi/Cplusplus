#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream fin("c:\\windows\\system.ini");
	if (!fin) {	cout << "c:\\windows\\system.ini 열기 실패" << endl; return 0; }

	char buf[81];	// istream의 getline() 함수 이용, 한 라인이 최대 80개의 문자로 구성
	while (fin.getline(buf, 81)) {	// 한 라인이 최대 80개의 문자로 구성, 끝에 \0 문자 추가
		cout << buf << endl;	
	}
	
	/* 전역함수 getline(ifstream& fin, string& line) 함수 이용해 작성하는 방법
	string line;
	ifstream fin("파일경로");
	while (getline(fin, line)) {	// 한 라인을 읽어 line에 저장, 파일끝까지 반복
		...	// 읽은 라인을 활용하는 코드 작성
	} */
	fin.close();
}

