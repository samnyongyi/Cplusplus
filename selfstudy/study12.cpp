string str = "aaa";

str.append("bbb");	// ���ڿ� ����
cout << str << endl; // "aaabbb"

str += "ccc";	// ���ڿ� ����
cout << str << endl; // "aaabbbccc��

// insert(), replace(), substr()
string str = "012345";

str.insert(2,"bbb"); // index�� 2�� ��ġ�� �ִ� ���� �տ� ����
cout << str << endl; // "01bbb2345��
str.replace(2,3,"bbb"); // index�� 2�� ��ġ�� �ִ� ���ں��� 3���� ���ڸ� "bbb"�� ��ü
cout << str << endl; // "01bbb5��

cout << str.substr(2) << endl; // "2345", index 2�� ��ġ���� �������� ���ڸ� ��ȯ
cout << str.substr(2,3) << endl; // "234", index 2�� ��ġ���� 3���� ���ڸ� ��ȯ

// erase(), clear()
string str = "012345";

str.erase(1, 4); // index�� 1~4�� �κ��� ����
cout << str << endl; // "05��

str.clear(); // ����Ǿ� �ִ� ���ڿ��� ��� ����
cout << str << endl; // ""

// find() 
string str = "kkk abc aaa";
int result;

result = str.find("f");	// f ������� &#8211;1 ����, ����� ���ڿ��� ���۵Ǵ� index ��ȯ
cout << result << endl; // -1 

result = str.find("aac");
cout << result << endl; // -1 
result = str.find("aaa");
cout << result << endl; // 8 

result = str.find("kkk", 4);
cout << result << endl; // -1,  �ε��� 4�� ��ġ���� Ȯ��, �ش� ���ڿ� ������� &#8211;1 ����

// stoi()
string str = "2000";
int a = stoi(str);		//���ڿ� ��ü�� ���ڷ� ��ȯ,  string��int ��ȯ�� ����, �������ڴ� �ݵ�� string��

string temp;
temp = str[0]; // ���ڿ� �� ���� ���ڷ� ��ȯ�ϴ� ���, index�� ����Ͽ� ��ȯ ����
int b = stoi(temp);	

// to_string()
int a = 12;
string str;
str = to_string(a); // 12, int��string ��ȯ ����

// [], at()
string str = "012345";
char c;

c = str[1];
c = str.at(1); // str[1] ������ ǥ��, �ش� index�� ���� �� ���� char������ ��ȯ

// toupper(), tolower(), front(), back()
string str = "abcde";

str[2] = toupper(str[2]);	// �ҹ��ڸ� �빮�ڷ� ��ȯ, �� �ϳ��� ���ھ��� ��ȯ ����
cout << str <<endl ; // abCde
str[2] = tolower(str[2]);	// �빮�ڸ� �ҹ��ڷ� ��ȯ, �� �ϳ��� ���ھ��� ��ȯ ����
cout << str <<endl ; // abcde

cout << str.front() << endl; // a, �� ���� ���ڸ� ��ȯ
cout << str.back() << endl; // e, �� ���� ���ڸ� ��ȯ

// isdigit(), isalpha(), empty()
string str = "1ABCDE";

cout << isdigit(str[0]) << endl; // 1, ���̸� 1��ȯ, ������ ��� 0��ȯ, ���ڰ� �������� �ƴ��� �Ǻ�

cout << isalpha(str[0]) << endl; // 0, ���̸� 1��ȯ, ������ ��� 0��ȯ, ���ڰ� �������� �Ǻ�

string str1 = "";

cout << str1.empty() << endl; // 1, ���̸� 1��ȯ, ������ ��� 0��ȯ, ���ڿ��� ����ֳ� �Ǻ�

// swap()
string str1 = "aaa";
string str2 = "ccc"; 

str1.swap(str2);	// string���ڿ��� ���� ��ȯ
cout << str1 << endl; // ccc
cout << str2 << endl; // aaa
