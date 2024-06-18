#include<iostream>
#include<fstream>
using namespace std;
long getFileSize(ifstream& fin) {
	fin.seekg(0, ios::end);	// get pointer를 파일의 맨끝으로 이동
	long length = fin.tellg();	// get pointer의 위치를 파악	
	return length;	// length는 파일의 크기와 동일
}
int main() {
	const char* file = "C:\\Windows\\system.ini";
	ifstream fin(file);
	if (!fin) {	cout << file << "열기 오류" << endl; return 0; }
	cout << file << "의 크기는 " << getFileSize(fin) << "바이트";
	fin.close();
}


