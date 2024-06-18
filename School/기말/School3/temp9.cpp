#include <iostream>
#include<vector>
#include<algorithm>	// for_each()�˰��� �Լ��� ����ϱ� ����
using namespace std;

//void print(int n) {	cout << n << " ";}
int main() {
	[](int x, int y) { cout << "���� " << x + y; } (2, 3); // 5, ���� �Լ� ����� ���ÿ� ȣ��

	auto love = [](string a, string b) {cout << a << "����" << b << "�� ����" << endl; };
	love("��", "��");	// ���ٽ� ȣ��

	double pi = 3.14;	// ��������
	auto calc = [pi](int r) -> double { return pi * r * r; };
	cout << "������ " << calc(3); // 28.26, ���ٽ� ȣ��

	int sum = 0; // ���� ����
	[&sum](int x, int y) { sum = x + y; } (2, 3); // �� 5�� �������� sum�� ����
	cout << "���� " << sum;

	vector <int>v = { 1,2,3,4,5 };
	//for each()�� ���� v�� ù��° ���Һ��� ������ �˻��ϸ鼭, �� ���ҿ� ���� 3��° �Ű������� ���ٽ� ȣ��, �Ű����� n�� �� ���� �� ����
	for_each(v.begin(), v.end(), [](int n) {cout << n << " "; });
	//for_each(v.begin(), v.end(), print);
}
