#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<int> v; 
	cout << "5���� ������ �Է��ϼ���>> ";
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		v.push_back(n); 
	}
	// v.begin()���� v.end() ������ ���� ������������ ����
	// sort()�Լ��� ���� ��� ���� v�� ���� ������ ����
	sort(v.begin(), v.end());	// ù��° �Ű�����: ������ ������ ������ �ּ�, �ι�° �Ű�����: ���� ������ ������ ���� ���� �ּ�
	vector<int>::iterator it;	// ���� ���� ���Ҹ� Ž���ϴ� iterator ���� ����
	for (it = v.begin(); it != v.end(); it++) cout << *it << ' ';
	cout << endl;
}