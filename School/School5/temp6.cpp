#include<iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
	for (int i = 0; i < strlen(a); i++) {	//strlen()문자열 길이 계산
		if (a[i] == c) {	
			success = true;	// *success가 안되는 이유는 success가 포인터가 아닌 값이기 때문
			return a[i];
		}
	}
}

int main() {
	char s[] = "Mike";
	bool b = false;	// b는 변수
	char& loc = find(s, 'M', b);	// loc은 참조변수가 아닌 포인터변수
	/*
	char a = find(s, 'M', b);
	char& loc = a;	// loc은 참조변수
	*/
	if (b == false) {
		cout << "M을 발견할 수 없다" << endl;
		return 0;
	}
	loc = 'm';	
	cout << s << endl;
}