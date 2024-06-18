#include <iostream>
#include<vector>
#include<algorithm>	// for_each()알고리즘 함수를 사용하기 위함
using namespace std;

//void print(int n) {	cout << n << " ";}
int main() {
	[](int x, int y) { cout << "합은 " << x + y; } (2, 3); // 5, 람다 함수 선언과 동시에 호출

	auto love = [](string a, string b) {cout << a << "보다" << b << "가 좋아" << endl; };
	love("돈", "너");	// 람다식 호출

	double pi = 3.14;	// 지역변수
	auto calc = [pi](int r) -> double { return pi * r * r; };
	cout << "면적은 " << calc(3); // 28.26, 람다식 호출

	int sum = 0; // 지역 변수
	[&sum](int x, int y) { sum = x + y; } (2, 3); // 합 5를 지역변수 sum에 저장
	cout << "합은 " << sum;

	vector <int>v = { 1,2,3,4,5 };
	//for each()는 벡터 v의 첫번째 원소부터 끝까지 검색하면서, 각 원소에 대해 3번째 매개변수인 람다식 호출, 매개변수 n에 각 원소 값 전달
	for_each(v.begin(), v.end(), [](int n) {cout << n << " "; });
	//for_each(v.begin(), v.end(), print);
}
