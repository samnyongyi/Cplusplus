#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<int> v; 
	cout << "5개의 정수를 입력하세요>> ";
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		v.push_back(n); 
	}
	// v.begin()에서 v.end() 사이의 값을 오름차순으로 정렬
	// sort()함수의 실행 결과 벡터 v의 원소 순서가 변경
	sort(v.begin(), v.end());	// 첫번째 매개변수: 소팅을 시작한 원소의 주소, 두번째 매개변수: 소팅 범위의 마지막 원소 다음 주소
	vector<int>::iterator it;	// 벡터 내의 원소를 탐색하는 iterator 변수 선언
	for (it = v.begin(); it != v.end(); it++) cout << *it << ' ';
	cout << endl;
}