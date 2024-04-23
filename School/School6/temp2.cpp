#include <iostream>
#include<string>
using namespace std;

// 함수 원형 선언
void star(int a = 5);	// 디폴트 매개변수
// 매개변수에 값이 넘어오지 않는 경우, 디폴트 값으로 받도록 선언된 매개변수
void msg(int id, string text = "");

// 함수구현
void star(int a) {
	for (int i = 0; i < a; i++) cout << '*';
	cout << endl;
}
void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}
int main() {
	star();	// '*****'
	star(10);	// '**********'
	msg(10);	// '10'
	msg(10, "Hello");	// '10 Hello'
}

