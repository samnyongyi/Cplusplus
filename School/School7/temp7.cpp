#include "Color.h"

int main() {	// temp7, tmep7_2
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color funchsia(255, 0, 255);
	if (c == funchsia) cout << "����� ����\n";
	else cout << "����� �ƴ�\n";
}
