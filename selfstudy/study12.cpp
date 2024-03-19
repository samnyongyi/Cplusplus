string str = "aaa";

str.append("bbb");	// 문자열 연결
cout << str << endl; // "aaabbb"

str += "ccc";	// 문자열 연결
cout << str << endl; // "aaabbbccc“

// insert(), replace(), substr()
string str = "012345";

str.insert(2,"bbb"); // index가 2인 위치에 있는 문자 앞에 삽입
cout << str << endl; // "01bbb2345“
str.replace(2,3,"bbb"); // index가 2인 위치에 있는 문자부터 3개의 문자를 "bbb"로 대체
cout << str << endl; // "01bbb5“

cout << str.substr(2) << endl; // "2345", index 2의 위치부터 끝까지의 문자를 반환
cout << str.substr(2,3) << endl; // "234", index 2의 위치부터 3개의 문자를 반환

// erase(), clear()
string str = "012345";

str.erase(1, 4); // index가 1~4인 부분을 삭제
cout << str << endl; // "05“

str.clear(); // 저장되어 있는 문자열을 모두 삭제
cout << str << endl; // ""

// find() 
string str = "kkk abc aaa";
int result;

result = str.find("f");	// f 미존재시 &#8211;1 리턴, 존재시 문자열이 시작되는 index 반환
cout << result << endl; // -1 

result = str.find("aac");
cout << result << endl; // -1 
result = str.find("aaa");
cout << result << endl; // 8 

result = str.find("kkk", 4);
cout << result << endl; // -1,  인덱스 4의 위치부터 확인, 해당 문자열 미존재시 &#8211;1 리턴

// stoi()
string str = "2000";
int a = stoi(str);		//문자열 전체를 숫자로 변환,  string→int 변환을 수행, 전달인자는 반드시 string형

string temp;
temp = str[0]; // 문자열 한 개를 숫자로 변환하는 경우, index를 사용하여 변환 가능
int b = stoi(temp);	

// to_string()
int a = 12;
string str;
str = to_string(a); // 12, int→string 변환 수행

// [], at()
string str = "012345";
char c;

c = str[1];
c = str.at(1); // str[1] 동일한 표현, 해당 index의 문자 한 개를 char형으로 반환

// toupper(), tolower(), front(), back()
string str = "abcde";

str[2] = toupper(str[2]);	// 소문자를 대문자로 변환, 단 하나의 문자씩만 변환 가능
cout << str <<endl ; // abCde
str[2] = tolower(str[2]);	// 대문자를 소문자로 변환, 단 하나의 문자씩만 변환 가능
cout << str <<endl ; // abcde

cout << str.front() << endl; // a, 맨 앞의 문자를 반환
cout << str.back() << endl; // e, 맨 뒤의 문자를 반환

// isdigit(), isalpha(), empty()
string str = "1ABCDE";

cout << isdigit(str[0]) << endl; // 1, 참이면 1반환, 거짓일 경우 0반환, 문자가 숫자인지 아닌지 판별

cout << isalpha(str[0]) << endl; // 0, 참이면 1반환, 거짓일 경우 0반환, 문자가 영어인지 판별

string str1 = "";

cout << str1.empty() << endl; // 1, 참이면 1반환, 거짓일 경우 0반환, 문자열이 비어있나 판별

// swap()
string str1 = "aaa";
string str2 = "ccc"; 

str1.swap(str2);	// string문자열을 서로 교환
cout << str1 << endl; // ccc
cout << str2 << endl; // aaa
