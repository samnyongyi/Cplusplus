string str1 = "abcde";
string str2 = "ccccc";
cout << (str1 < str2) << endl;	// 1 ���, �� ���� ���ڻӸ� �ƴ� ��ü ���ڸ� ���� ��� ���
cout << (str1 > str2) << endl;	// 0 ���

// compare�Լ��� �̿��� �������� �� 
int result;
string name1 = "appaa";
string name2 = "appbb";
result = name1.compare(name2); // ������ 0, name1�� name2���� �տ� ��ġ�� &#8211;1, name1�� name2���� �ڿ� ��ġ�� 1
if(result == 0) cout << "�� ���ڿ��� ����" << endl; 
cout << result
