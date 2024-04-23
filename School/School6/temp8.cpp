#include<iostream>
using namespace std;
/*
static int* concat(int s1[], int s2[], int size) {
	int n2[10] = { 0 };
	for (int i = 0; i < size; i++) {
		n2[i] = s1[i];
		n2[i + 5] = s2[i];
	}
	return n2;
}

static int* remove(int s1[], int s2[], int size, int& resize) {
	int n[10] = { 0 };
	
	for (int i = 0; i < size; i++) {
		for(int j=0; j<size; j++){
			if (s1[i] != s2[j]) {
				n[i] = s1[i];
				resize++;
			}
		}
	}
	return n;
}

int main() {
	int num[5] = {0};
	int num2[5] = { 0 };
//	int num3[5] = { 0 };
	int resize=0;

	cout << "정수를 5개 입력하라. 배열 x에 삽입한다.>> " << num;
	cout << "정수를 5개 입력하라. 배열 y에 삽입한다.>> " << num2;
	cout << "합친 정수 배열을 출력한다";
	concat(num, num2, size(num));
	remove(num, num2, size(num), resize);
	cout << "배열x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << resize;
	cout << n;
}
*/

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};
int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* p = new int[size*2];
	if (!p) return NULL;
	for (int i = 0; i < size; i++) p[i] = s1[i];
	for (int i = 0; i < size; i++) p[i + size/2] = s2[i];
	return p;
}
int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int* p = new int[size];
//	if (!p) {retSize = 0; return NULL;}
	int k = 0;
	for (int i = 0; i < size; i++) {
		int j;
		for (j = 0; j < size; j++)if (s1[i] == s2[j])break;
		if (j == size) {
			p[k] = s1[i];
			k++;
		}
	}
	retSize = k;
	if (k == 0)return NULL;
	int* q = new int[retSize];
	if (!q) { retSize = 0; return NULL; }
	for (int i = 0; i < retSize; i++)q[i] = p[i];
	delete[] p;
	return q;
}

// 입력받는 부분을 함수로 분리
void inputArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

// 출력하는 부분을 함수로 분리
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
	int x[5], y[5];
	int size, retSize = 0;
	int* p;

	cout << "정수 5개를 입력하여 배열 x에 저장합니다." << endl;
	inputArray(x, 5);

	cout << "정수 5개를 입력하여 배열 y에 저장합니다." << endl;
	inputArray(y, 5);

	size = 5 + 5; // Sum of sizes of x and y

	cout << "두 배열을 합친 결과를 출력합니다." << endl;
	p = ArrayUtility2::concat(x, y, size);
	printArray(p, size);

	cout << "배열 x에서 배열 y를 제거한 결과를 출력합니다." << endl;
	p = ArrayUtility2::remove(x, y, size, retSize);
	cout << "제거 후 개수: " << retSize << endl;
	if (retSize > 0)
		printArray(p, retSize);
	else
		cout << "모든 요소가 제거되었습니다." << endl;

	delete[] p; // 메모리 해제

	return 0;
}
/*
int main() {
	int x[5], y[5];
	int size, retSize = 0;
	int* p;

	cout << "정수 5개를 입력하여 배열 x에 저장합니다." << endl;
	inputArray(x, 5);

	cout << "정수 5개를 입력하여 배열 y에 저장합니다." << endl;
	inputArray(y, 5);

	size = sizeof(x) / sizeof(x[0]) + sizeof(y) / sizeof(y[0]); // 배열 크기 계산

	cout << "두 배열을 합친 결과를 출력합니다." << endl;
	p = ArrayUtility2::concat(x, y, size);
	printArray(p, size);

	cout << "배열 x에서 배열 y를 제거한 결과를 출력합니다." << endl;
	p = ArrayUtility2::remove(x, y, size, retSize);
	cout << "제거 후 개수: " << retSize << endl;
	printArray(p, retSize);

	delete[] p; // 메모리 해제

	return 0;
}*/
/*
int main() {
	int x[5], y[5];
	int size, retSize = 0;
	int* p;

	cout << "정수를 5개 입력하라. 배열 x에 삽입한다.>> ";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "정수를 5개 입력하라. 배열 y에 삽입한다.>> ";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	size = sizeof(x) + sizeof(y);
	cout << "합친 정수 배열을 출력한다\n";
	p = ArrayUtility2::concat(x, y, size);
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	p = ArrayUtility2::remove(x, y, size, retSize);
	cout << "배열x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize;
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
}*/

