#include <iostream>
#include <string>
//23018092 조동현 
using namespace std;

class Account{
	string name;
	int id;
	int balance;
public:
	Account(string str, int a, int b);
	int deposit(int a);
	int withdraw(int a);
	string getOwner();
	int inQuery();
};

Account::Account(string str, int a, int b){
	name=str;
	id= a;
	balance=b;
}
int Account :: deposit(int a){
	balance+=a;
}
int Account :: withdraw(int a){
	balance-=a;
}
int Account ::  inQuery(){
	return balance;
}
string Account:: getOwner(){
	return name;
}


int main(){
	Account a("조동현", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner()<<"의 잔액은"<< a.inQuery()<<endl;
	int money = a.withdraw(20000);
	cout<<a.getOwner()<<"의 잔액은"<<a.inQuery()<<endl;	
	
	return 0;
}
