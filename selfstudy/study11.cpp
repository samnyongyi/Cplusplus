string str = "abcde";	// string ��ü�� �� ���ھ� ����
cout << str[0]; // 'a' ���

string str[5];	// string ��ü �迭�� �� ��ü�� ����
string[0] = "abcde";	
string[1] = "fghij";
cout << str[0]; // "abcde"���

// string ���� ���� 
string str;	// ���ڿ� ����

string str = "abcde";	// ���ڿ� �ʱ�ȭ ���1
string str("abcde");	// ���ڿ� �ʱ�ȭ ���2

// C-��Ʈ������ ȣȯ�� �����ִ� ���
char s[] = {'a', 'b', 'c', 'd', 'e��}; // ���ڹ迭
string str(s);	// �ι��ڸ� �߰����Ѽ� ���ڿ��� ��ȯ

string str = "abcde"; 
string str2(str);	// ���ڿ� ������ �����Ͽ� ���ο� ��ü�� ����(�ּҺ���X)
// new, delete�� �̿��� �����Ҵ� ���1
string *p = new string(); // new �� �̿��Ͽ� ��ü�� ����, �����ͺ����� ����
p->append(" Great!!"); // �����ͺ��� p�� ����Ű�� �ִ� ��ü�� �Լ� append ���
cout << *p << endl; // ������ ������ ����Ű�� �ִ� ��ü�� ���� ���������� '*'���
delete p; // new�����ڸ� ���� delete�����ڸ� ����Ͽ� �޸� ��ȯ

// new, delete�� �̿��� �����Ҵ� ���2
string *p = new string("C++"); // ���� ��Ŀ��� ���⸸ �ٸ�
p->append(" Great!!"); 
cout << *p << endl;
delete p; 

// new, delete�� �̿��� �����Ҵ� ���3
string str = "abcd"
string *p = new string(str); // ���� ��Ŀ��� ���⸸ �ٸ�
p->append(" Great!!"); 
cout << *p << endl;
delete p; // �޸� ��ȯ

string str = "012345";

cout << str.length() << endl; // 6 ���ڿ����� ��ȯ
cout << str.size() << endl; // 6 ���ڿ����� ��ȯ(length, size�� ���۰���� ����)
cout << str.capacity() << endl; // 22 �� ��ü�� ������� �޸� ũ��(����)

