#include<iostream>
using namespace std;
class Person {
public:
	int money;
	void addMoney(int money) { this->money += money; }
	// static ����� Ŭ������ �ϳ��� ���������Ͽ� ��ü ���̿� ���� ������ �����ϰ��� �Ҷ� ���
	// non-static  ����� ��ü���� ��ü���� ����
	static int shareMoney;	// static ��� ���� ����
	static void addShared(int n) { shareMoney += n; }	// static ��� �Լ� ����
};
int Person::shareMoney = 10;	// ��ü ���α׷� ���� �� ���� �����Ǳ⿡ Ŭ������::���� ���� ����

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