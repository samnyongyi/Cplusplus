#include <iostream>
#include <string>

using namespace std;	// 23018092 ������ 

int main(){
	string str;
	int i;
	
	cout << ("���ڿ��� �Է� : ");
	cin >> str;
	
	
	for(i=0; i<str.length(); i++){
		for(int j=0; j<i+1; j++){
			cout << str[j];
		}
		cout << "\n";
	}
	
	
	return 0;
}


/*	//getline()�� ���� �ۼ� 
int main(){
	string str; 
	cout >> "���ڿ� �Է�";
	getline(cin, str);	

	for(int i=0l i<str.length; i++){
		for(int j=0; j<=i; j++)	count << str[j];
		cout<< endl;
	}	
	return 0;
}
*/
