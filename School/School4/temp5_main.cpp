#include <iostream>
#include<string>	
using namespace std;

int man() {
	string names[5];	// 가변 크기의 문자열
		
	for (int i = 0; i < 5; i++) {
		cout << "이름>> ";
		getline(cin, names[i], '\n');	// 입력받은 문자열을, 문자열에 저장하고, 마지막에 \n을 저장 
	}
	string latter = names[0];
	for (int i = 1; i < 5; i++) {
		if (latter < names[i]) {
			latter = names[i];
		}
	}
	cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
}