#include <iostream>
#include <string>
using namespace std;
int min() {
	string temp;
	
	cout<<"���ڿ� �Է�>> ";
	cin >> temp;
	int count=0;

	for (int i = 0; i < temp.length(); i++) {
		if (temp[i] = 'a') count++;
	}
	cout << "���� a��" << count << "�� �ֽ��ϴ�."<< endl;
	/*
	int num = 0;
	int num2 = 0;	
	for (int i = 0; i < temp.length(); i++) {	
		num = temp.find('a', num);	//temp[num]�� �ȵ�
		cout << "a�� �ִ� �ε�����" << num << endl;
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
	cout << "a�� �ִ� �ε�����" << count << endl;
}

//Are you happy? I am so happy.