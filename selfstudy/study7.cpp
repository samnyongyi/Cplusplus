#include <iostream>
using namespace std;

int main() {
	cout << "주소를 입력하세요>>";
	char address[100]; 

	cin.getline(address, 100, '\n'); // 문자열 입력방법2 (저장할 버퍼, 최대저장가능한 바이트, 입력중단), 최대 99개의 문자를 읽어 address배열에 저장, 도중에 enter키를 만나면 입력 중단(디폴트 값이 \n이기에 생략가능), 빈칸이 있어도 하나의 문자열로 인식
	cout << "주소는 " << address << "입니다\n"; 
}
