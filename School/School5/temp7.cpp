#include "Circle.h"

int main() {
	Circle src(30);
	Circle dest(src);

	cout << "원본의 면적= " << src.getArea() << endl;
	cout << "사본의 면적= " << dest.getArea() << endl;
}