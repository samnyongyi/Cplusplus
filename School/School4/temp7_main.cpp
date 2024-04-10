#include <iostream>
#include <string>
using namespace std;

int man() {
	string s;
	cout << "여러줄의 문자열을 입력하세요. 입력의 끝은 %문자입니다." << endl;
	getline(cin, s, '&');
	cin.ignore();	// &뒤에 따라오는 Enter키를 제거하기 위한 코드
	string f, r;
	cout << endl << "find"; getline(cin, f, '\n');
	cout << "replace"; getline(cin, r, '\n');

	int startIndex = 0;
	while (true) {
		int fIndex = s.find(f, startIndex);	// s[0]부터 문자열 f 검색
		if (fIndex == -1) break;	// 문자열 s의 끝까지 변경완료
		s.replace(fIndex, f.length(), r);	// fIndex부터 문자열 f의 길이만큼 문자열 r로 변경
		startIndex = fIndex + r.length();	// 삽입한 길이만큼 건너띄어서 다시 찾기
	}
	cout << s << endl;
}