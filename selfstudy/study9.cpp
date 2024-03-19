string str = "";	// 문자열의 크기를 동적으로 변경 가능
getline(cin, str);		// 키보드에 입력받은 문자열을 str문자열에 저장
cout << str;	// 입력받은 문자열을 출력
str.append("you"); // append()함수를 이용하여 문자열 뒤에 문자열 추가
cout << str;	
cout << str[0];	// 문자열의 첫 문자를 출력

// 문자열 비교는 ‘==‘연산자 이용
string str1 = "abcde";
string str2 = "abcde";
string str3 = "abcff";
cout << (str1 == str2) << endl;	// 1 출력, 문자열을 비교시 ==연산자 이용
cout << (str1 == str3) << endl;	// 0 출력
