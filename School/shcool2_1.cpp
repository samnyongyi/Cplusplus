#include <iostream>
#include <string>

using namespace std;	// 23018092 조동현 

int main(){
	string str;
	int i;
	
	cout << ("문자열을 입력 : ");
	cin >> str;
	
	
	for(i=0; i<str.length(); i++){
		for(int j=0; j<i+1; j++){
			cout << str[j];
		}
		cout << "\n";
	}
	
	
	return 0;
}


/*	//getline()을 통해 작성 
int main(){
	string str; 
	cout >> "문자열 입력";
	getline(cin, str);	

	for(int i=0l i<str.length; i++){
		for(int j=0; j<=i; j++)	count << str[j];
		cout<< endl;
	}	
	return 0;
}
*/
