#include <iostream>

using namespace std;	// cout에 대해서 std:: 접두어 사용을 생략하기 위해 작성

int main(){
	cout << "너비를 입력하세요 >>";
	
	int width;
	cin >> width;	// 표준 입력장치인 키보드를 연결하는 C++ 입력 스트림 객체, 입력 버퍼를 내장하고 있으며 enter키가 입력될때까지 입력된 키를 입력 버퍼에 저장, backspace 키를 입력시 입력된 키 삭제
// >> 연산자는 스트림 추출 연산자, enter키가 입력된 후 cin의 입력 버퍼에서 키 값을 읽어 변수에 전달
	cout << "높이를 입력하세요>>";	
	int height;	// 중간에 변수 선언 가능, 단 사용하기전에 선언해야 오류 미발생
	cin >> height;
	
	int area = width*height;
	cout << "면적은" << area << "\n";
	return 0;
}
