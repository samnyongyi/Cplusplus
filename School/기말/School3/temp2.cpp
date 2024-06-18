#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> v;	// 정수만 삽입가능한 벡터 생성
	v.push_back(1);	// 벡터에 정수 1 삽입
	v.push_back(2);
	v.push_back(3);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	v[0] = 10;	
	int n = v[2];
	v.at(2) = 5;	// 벡터의 3번째 원소를 5로 변경

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}