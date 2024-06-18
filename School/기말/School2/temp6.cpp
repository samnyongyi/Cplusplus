#include<iostream>
using namespace std;

template<class T>
T biggest(T a[], int n) {
	
	if (n <= 0) return 0;
	
	T b = a[0];
	for (int i = 0; i < n; i++) {
		if (b < a[i]) b = a[i];
	return b;
	}
}
int main() {
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;
	double y[] = { 6.4,3.3,-2006,7.7,8.8,20.3 };
	cout << biggest(y, 6);
}