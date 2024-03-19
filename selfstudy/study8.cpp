#include <iostream>
#include <string>	// string 클래스를 사용하기위해 필요
using namespace std;

int main() {
	string song("Falling in love with you"); 	// 문자열 song
	string elvis("Elvis Presley"); 
	string singer;	// 문자열의 크기에 따른 제약이 없으며 string클래스가 스스로 문자열 크기에 맞게 내부 버퍼 조절

	cout << song + "를 부른 가수는";		// + 로 문자열 연결, << 사용가능
	cout << "(힌트 : 첫글자는 " << elvis[0] << ")?";	// E출력

	getline(cin, singer); // 문자열 입력, getline()은 string 타입의 문자열을 입력받기 위해 제공되는 전역 함수), getline(표준입력스트림객체, 문자열객체) → 입력버퍼에서 문자열을 가져와 문자열객체에 저장
	if(singer == elvis) cout << "맞았습니다.";
	else cout << "틀렸습니다. "+ elvis + "입니다." << endl; // +로 문자열 연결
}

