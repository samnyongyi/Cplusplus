#include <iostream>
#include <string>
#include <cstdlib> // ���ڿ��� ����ϱ� ���� cstdlib�� ����

using namespace std;

class Date{
	int year;
	int month;
	int day;	
	string str;
public:
	Date(int a, int b, int c);
	Date(string str1);
	
	string show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int a, int b, int c){
	year = a;
	month = b;
	day = c;
}

Date::Date(string str1){
	str = str1; // str1�� Ŭ���� ��� str�� �Ҵ�
}

string Date::show(){
	string s = str;
	int index_y = s.find("/", 0); //find(ã�� ���ڿ�, ������ġ)
	int index_m = s.find("/", index_y + 1);
	int index_d = s.find("/", index_m + 1);
	string y = s.substr(0, index_y);
	string m = s.substr(index_y + 1, index_m - index_y - 1);
	string d = s.substr(index_m + 1, index_d - index_m - 1);
	
	return y + "��" + m + "��" + d + "��"; // ������ �ִ� ���ڿ��� ��ȯ
}

int Date::getYear(){
	return year;
}

int Date::getMonth(){
	return month;
}

int Date::getDay(){
	return day;
}

int main() {
	Date birth(2014, 3, 30);
	Date independDay("1945/8/15");

	cout << independDay.show() << endl; // ����� ǥ���ϱ� ���� cout�� ���
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
}

