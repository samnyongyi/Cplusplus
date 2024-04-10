#include <iostream>
#include <string>
using namespace std;
int min() {
	string temp;
	
	cout<<"문자열 입력>> ";
	cin >> temp;
	int count=0;

	for (int i = 0; i < temp.length(); i++) {
		if (temp[i] = 'a') count++;
	}
	cout << "문자 a는" << count << "개 있습니다."<< endl;
	/*
	int num = 0;
	int num2 = 0;	
	for (int i = 0; i < temp.length(); i++) {	
		num = temp.find('a', num);	//temp[num]은 안됨
		cout << "a가 있는 인덱스는" << num << endl;
		num++;
	}*/
	int index = 0;
	count = 0;
	while (true) {
		index = temp.find('a', index);
		if (index == -1) break;
		count++;
		index++;
	}
	cout << "a가 있는 인덱스는" << count << endl;
}

//Are you happy? I am so happy.