#include <iostream>
#include <cstring>	// C-스트링으로 지칭, strcmp()/strlen()/strcpy()등 사용 가능, <string.h>로 작성가능하지만 <cstring>이 C++ 표준방식
using namespace std;	// strcmp()함수를 사용하기 위한 헤더 파일

int main() {
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while(true) {	// 1대신 true 사용
		cout << "암호>>";
		cin >> password;
		if(strcmp(password, "1") == 0) {	// 문자열 비교
			break;
		}
		else cout << "암호 오류" << endl;
	}
	return 0
}
