#include <iostream>
#include <fstream>
using namespace std;
int main() {
	const char* srcFile = "C:\\temp.jpg";
	const char* destFile = "C:\\temp.jpg";
	ifstream fsrc(srcFile, ios::in | ios::binary);	// 소스 파일 열기
	if (!fsrc) { cout << srcFile << " 열기 오류" << endl; return 0;	}
	ofstream fdest(destFile, ios::out | ios::binary);	// 목적파일 열기
	if (!fdest) { cout << destFile << " 열기 오류" << endl; return 0; }
	
	char buf[1024];
	while (!fsrc.eof()) { // 파일 끝까지 읽기, 소스 파일에서 목적 파일로 복사하기
		fsrc.read(buf, 1024); // 최대 1024 바이트를 읽어 배열 s에 저장
		int n = fsrc.gcount(); // 실제 읽은 바이트 수 알아내기
		fdest.write(buf, n); // 읽은 바이트 수 만큼 버퍼에서 목적 파일에 기록
// read()/write()는 블록 단위로 파일 입출력
	}
	/*
	int c;
	while((c=fsrc.get()) != EOF) { // 소스 파일을 끝까지 한 바이트씩 읽기
		fdest.put(c); // 읽은 바이트를 파일에 출력
// get()/put()은 문자 혹은 바이트 단위로 파일 입출력
	}*/

	cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;
	fsrc.close(); fdest.close();
}