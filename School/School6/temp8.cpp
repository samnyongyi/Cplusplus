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

	cout << "������ 5�� �Է��϶�. �迭 x�� �����Ѵ�.>> " << num;
	cout << "������ 5�� �Է��϶�. �迭 y�� �����Ѵ�.>> " << num2;
	cout << "��ģ ���� �迭�� ����Ѵ�";
	concat(num, num2, size(num));
	remove(num, num2, size(num), resize);
	cout << "�迭x[]���� y[]�� �� ����� ����Ѵ�. ������ " << resize;
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

// �Է¹޴� �κ��� �Լ��� �и�
void inputArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

// ����ϴ� �κ��� �Լ��� �и�
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

	cout << "���� 5���� �Է��Ͽ� �迭 x�� �����մϴ�." << endl;
	inputArray(x, 5);

	cout << "���� 5���� �Է��Ͽ� �迭 y�� �����մϴ�." << endl;
	inputArray(y, 5);

	size = 5 + 5; // Sum of sizes of x and y

	cout << "�� �迭�� ��ģ ����� ����մϴ�." << endl;
	p = ArrayUtility2::concat(x, y, size);
	printArray(p, size);

	cout << "�迭 x���� �迭 y�� ������ ����� ����մϴ�." << endl;
	p = ArrayUtility2::remove(x, y, size, retSize);
	cout << "���� �� ����: " << retSize << endl;
	if (retSize > 0)
		printArray(p, retSize);
	else
		cout << "��� ��Ұ� ���ŵǾ����ϴ�." << endl;

	delete[] p; // �޸� ����

	return 0;
}
/*
int main() {
	int x[5], y[5];
	int size, retSize = 0;
	int* p;

	cout << "���� 5���� �Է��Ͽ� �迭 x�� �����մϴ�." << endl;
	inputArray(x, 5);

	cout << "���� 5���� �Է��Ͽ� �迭 y�� �����մϴ�." << endl;
	inputArray(y, 5);

	size = sizeof(x) / sizeof(x[0]) + sizeof(y) / sizeof(y[0]); // �迭 ũ�� ���

	cout << "�� �迭�� ��ģ ����� ����մϴ�." << endl;
	p = ArrayUtility2::concat(x, y, size);
	printArray(p, size);

	cout << "�迭 x���� �迭 y�� ������ ����� ����մϴ�." << endl;
	p = ArrayUtility2::remove(x, y, size, retSize);
	cout << "���� �� ����: " << retSize << endl;
	printArray(p, retSize);

	delete[] p; // �޸� ����

	return 0;
}*/
/*
int main() {
	int x[5], y[5];
	int size, retSize = 0;
	int* p;

	cout << "������ 5�� �Է��϶�. �迭 x�� �����Ѵ�.>> ";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "������ 5�� �Է��϶�. �迭 y�� �����Ѵ�.>> ";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	size = sizeof(x) + sizeof(y);
	cout << "��ģ ���� �迭�� ����Ѵ�\n";
	p = ArrayUtility2::concat(x, y, size);
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	p = ArrayUtility2::remove(x, y, size, retSize);
	cout << "�迭x[]���� y[]�� �� ����� ����Ѵ�. ������ " << retSize;
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
}*/

