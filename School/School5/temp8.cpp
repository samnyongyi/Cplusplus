#include "Person.h"

int main() {
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "daughter ��ü ���� ����---" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter �̸��� Grace�� ������ ��---" << endl;
	father.show();
	daughter.show();

	return 0;
}	