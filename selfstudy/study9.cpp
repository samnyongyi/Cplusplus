string str = "";	// ���ڿ��� ũ�⸦ �������� ���� ����
getline(cin, str);		// Ű���忡 �Է¹��� ���ڿ��� str���ڿ��� ����
cout << str;	// �Է¹��� ���ڿ��� ���
str.append("you"); // append()�Լ��� �̿��Ͽ� ���ڿ� �ڿ� ���ڿ� �߰�
cout << str;	
cout << str[0];	// ���ڿ��� ù ���ڸ� ���

// ���ڿ� �񱳴� ��==�������� �̿�
string str1 = "abcde";
string str2 = "abcde";
string str3 = "abcff";
cout << (str1 == str2) << endl;	// 1 ���, ���ڿ��� �񱳽� ==������ �̿�
cout << (str1 == str3) << endl;	// 0 ���
