#include <iostream>

using namespace std;
int j() {
	cout << "입력할 정수의 개수는?";
	int n;
	cin >> n;
	if (n <= 0)return 0;
	int* p = new int[n];
	if (!p) {	// 메모리 할당을 실패했을 경우
		cout << "메모리를 할당할 수 없습니다";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 정수: ";
			cin >> p[i];

	}
	int sum = 0;
	for (int i = 0; i<n; i++)sum += p[i];
	cout << "평균= " << sum / n << endl;
	delete[]p;
}

