#include<iostream>
#include<fstream>
using namespace std;
int main() {
	const char* file = "C:\\Windows\\system.ini";

	ifstream fin(file);
	if (!fin) {	cout << file << "열기 오류" << endl; return 0;}
	int count = 0, c;
	while ((c = fin.get()) != EOF) {	// EOF를 만날 때까지 파일에서 문자 읽기
		cout << (char)c;
		count++;
	}
	cout << "읽은 바이트 수는 " << count << endl;	// \r\n을 \n 한 바이트로 리턴하기에 실제 바이트 수보다 적게 리턴
	fin.close();	// 파일닫기
}