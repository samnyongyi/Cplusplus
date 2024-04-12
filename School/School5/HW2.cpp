#include"Dept.h"

void countPass(Dept& dept) {
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) {
			count++;
		}
	}
	cout << "60점 이상 학생 수: " << count << endl;
}

int main() {
//	int size;
	Dept dept(10); 
	dept.read(); 

	countPass(dept); 

	return 0;
}

