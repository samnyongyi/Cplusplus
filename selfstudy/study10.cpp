string str1 = "abcde";
string str2 = "ccccc";
cout << (str1 < str2) << endl;	// 1 출력, 맨 앞의 문자뿐만 아닌 전체 문자를 비교한 결과 출력
cout << (str1 > str2) << endl;	// 0 출력

// compare함수를 이용한 사전순서 비교 
int result;
string name1 = "appaa";
string name2 = "appbb";
result = name1.compare(name2); // 같으면 0, name1이 name2보다 앞에 위치시 &#8211;1, name1이 name2보다 뒤에 위치시 1
if(result == 0) cout << "두 문자열은 같음" << endl; 
cout << result
