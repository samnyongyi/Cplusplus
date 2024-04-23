#include<iostream>
using namespace std;
class Person {
public:
	int money;
	void addMoney(int money) { this->money += money; }
	// static 멤버는 클래스당 하나만 생성가능하여 객체 사이에 공유 변수를 생성하고자 할때 사용
	// non-static  멤버는 객체마다 객체내에 생성
	static int shareMoney;	// static 멤버 변수 선언
	static void addShared(int n) { shareMoney += n; }	// static 멤버 함수 선언
};
int Person::shareMoney = 10;	// 전체 프로그램 내에 한 번만 생성되기에 클래스명::으로 접근 가능

int main() {
	Person::addShared(50);
	cout << Person::shareMoney << endl;	// 60
	Person han;
	han.money = 100;
	han.shareMoney = 200;
	Person::shareMoney = 300;
	Person::addShared(100);
	cout << han.money << ' ' << Person::shareMoney << endl;	// 100, 400
}