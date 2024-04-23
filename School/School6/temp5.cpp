#include<iostream>
using namespace std;

class big {
	int max;
public:
	big(int n = 0, int n2 = 0, int n3 = 0) {
		max = n;
		if (n2 > max) max = n2;
		if (n3 > max) max = n3;
	}
};
int big(int n, int n2, int n3 = 100) {
	int max = (n > n2) ? n : n2;
	return (max > 100) ? n3 : max;
}
int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}