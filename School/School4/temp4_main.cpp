#include "Circle3.h"
#include "CircleManager.h"

int main() {
	CircleManager* pCM;	// CircleManager클래스의 포인터 pCM, 클래스 객체의 메모리 주소 저장
	cout << "원의 개수>>"; int n; cin >> n;
	pCM = new CircleManager(n); pCM->searchByName(); pCM->searchByArea(); delete pCM;
}

