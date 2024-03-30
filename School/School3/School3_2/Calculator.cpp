#include <iostream>
#include "Calculator.h"
#include "Adder.h"
using namespace std;

void Calculator::run() {
	cout << "두 개의 수를 입력하세요>>";
	int a, b;
	cin >> a >> b; // 정수 두 개 입력
	Adder adder(a, b);
	cout << adder.process(); 
}