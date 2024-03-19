#include <iostream>
 
double area(int r);	// 함수의 원형 선언

double area(int r){	// 함수 구현
	return 3.14*r*r;
}

int main(){
	int n=3;
	char c='#';
	std::cout << c << 5.5 << '-' << n << "hello" << true;	// 여러개의 << 연산자로 여러값 출력 가능, bool/char/short/int/long/float/double 타입 값 출력 가능, true는 1로 출력
	std::cout << "n+5=" << n+5 << '\n' << std::endl;;		// 연산식 사용 가능, \n, endl은 줄바꿈기능을 수행하지만 약간의 차이 존재
	std::cout << "면적은" << area(n); 	// 함수 호출 가능
	return 0;
}
