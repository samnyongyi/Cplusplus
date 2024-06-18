#include<iostream>
using namespace std;

template<class T1,class T2>
void mcopy(T1 src[], T2 dest[], int n) {
	for (int i = 0; i < n; i++)	dest[i] = (T2)src[i];
}
int main() {
	int x[] = { 1,2,3,4,5 };
	double d[5];
	char c[5] = { 'H','e','l','l','o' }, e[5];

	mcopy(x, d, 5);	// T1->int, T2->double
	mcopy(c, e, 5);	// T1->char, T2->char

	for (int i = 0; i < 5; i++) cout << d[i] << ' ' << endl;
	for (int i = 0; i < 5; i++) cout << e[i] << ' ' << endl;
}