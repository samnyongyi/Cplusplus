iostream, std::cout, <<
#include <iostream>	// 헤더파일, C에선 #include <stdio.h>와 비슷한 기능을 하는 헤더파일이라고 봐도 무방 

int main(int argc, char** argv) {
	std::cout << "Hello\n";	// std::out에서 std는 C++표준에서 정의한 이름 공간 중 하나, std 이름 공간에 선언된 이름을 접근하기 위해 std::접두어 사용, 이름 공간은  사용자가 임의로 작성해도 상관 없지만 소스가 길어지고 복잡해지기에 가능하면 std라는 이름공간 사용권장 
// cout는 스크린 출력장치에 연결된 표준 C++ 출력 스트림 객체, <iostream> 헤더 파일에 포함
// <<는 스트림 삽입 연산자, 오른쪽 피연산자를 왼쪽 스트림 객체에 삽입, cout 객체에 연결된 화면에 출력
	return 0;	// C와 달리 C++에선 main 함수에서 return 0;를 생략 가능 
}

