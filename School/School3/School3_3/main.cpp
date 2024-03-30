#include <iostream>
#include "Box.h"
using namespace std;

int main() {	//23018092
	Box b(10, 2);
	b.draw();
	cout << endl;
	b.setSize(7, 4);
	b.setFill('^');
	b.draw();
}
	