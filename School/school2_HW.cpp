#include <iostream>
#include <string>
#include <cstdlib> // 문자열을 사용하기 위해 cstdlib를 포함

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
	str = str1; // str1을 클래스 멤버 str에 할당
}

string Date::show(){
	string s = str;
	int index_y = s.find("/", 0); //find(찾을 문자열, 시작위치)
	int index_m = s.find("/", index_y + 1);
	int index_d = s.find("/", index_m + 1);
	string y = s.substr(0, index_y);
	string m = s.substr(index_y + 1, index_m - index_y - 1);
	string d = s.substr(index_m + 1, index_d - index_m - 1);
	
	return y + "년" + m + "월" + d + "일"; // 서식이 있는 문자열을 반환
}
/*
	void Date::show() {
    year = stoi(str.substr(0, str.find("/")));
    int nextSlash = str.find("/", str.find("/") + 1);
    month = stoi(str.substr(str.find("/") + 1, nextSlash - str.find("/") - 1));
    day = stoi(str.substr(nextSlash + 1));
}
*/

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

	cout << independDay.show() << endl; // 결과를 표시하기 위해 cout을 사용
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
}

