#include <iostream>
#include<string>
using namespace std;

// �Լ� ���� ����
void star(int a = 5);	// ����Ʈ �Ű�����
// �Ű������� ���� �Ѿ���� �ʴ� ���, ����Ʈ ������ �޵��� ����� �Ű�����
void msg(int id, string text = "");

// �Լ�����
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

