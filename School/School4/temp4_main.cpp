#include "Circle3.h"
#include "CircleManager.h"

int main() {
	CircleManager* pCM;	// CircleManagerŬ������ ������ pCM, Ŭ���� ��ü�� �޸� �ּ� ����
	cout << "���� ����>>"; int n; cin >> n;
	pCM = new CircleManager(n); pCM->searchByName(); pCM->searchByArea(); delete pCM;
}

