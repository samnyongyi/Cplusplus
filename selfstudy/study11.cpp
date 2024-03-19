string str = "abcde";	// string 객체를 한 문자씩 접근
cout << str[0]; // 'a' 출력

string str[5];	// string 객체 배열을 한 객체씩 접근
string[0] = "abcde";	
string[1] = "fghij";
cout << str[0]; // "abcde"출력

// string 예시 정리 
string str;	// 문자열 생성

string str = "abcde";	// 문자열 초기화 방식1
string str("abcde");	// 문자열 초기화 방식2

// C-스트링과의 호환을 보여주는 방식
char s[] = {'a', 'b', 'c', 'd', 'e＇}; // 문자배열
string str(s);	// 널문자를 추가시켜서 문자열로 변환

string str = "abcde"; 
string str2(str);	// 문자열 내용을 복사하여 새로운 객체를 생성(주소복사X)
// new, delete를 이용한 동적할당 방식1
string *p = new string(); // new 를 이용하여 객체를 생성, 포인터변수로 선언
p->append(" Great!!"); // 포인터변수 p가 가리키고 있는 객체의 함수 append 사용
cout << *p << endl; // 포인터 변수가 가리키고 있는 객체의 값을 가져오려면 '*'사용
delete p; // new연산자를 사용시 delete연산자를 사용하여 메모리 반환

// new, delete를 이용한 동적할당 방식2
string *p = new string("C++"); // 위의 방식에서 여기만 다름
p->append(" Great!!"); 
cout << *p << endl;
delete p; 

// new, delete를 이용한 동적할당 방식3
string str = "abcd"
string *p = new string(str); // 위의 방식에서 여기만 다름
p->append(" Great!!"); 
cout << *p << endl;
delete p; // 메모리 반환

string str = "012345";

cout << str.length() << endl; // 6 문자열길이 반환
cout << str.size() << endl; // 6 문자열길이 반환(length, size는 동작결과가 동일)
cout << str.capacity() << endl; // 22 이 객체가 사용중인 메모리 크기(가변)

