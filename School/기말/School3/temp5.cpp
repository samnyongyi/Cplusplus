#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
	map<string, string> dic;	// �� �����̳� ����, Ű�� ����ܾ�, ���� �ѱ� �ܾ�	
	dic.insert(make_pair("love", "���"));	// ("love", "���") ����
	dic.insert(make_pair("apple", "���"));
	dic["cherry"] = "ü��";	// ("cherry", "ü��") ����

	cout << "����� �ܾ� ����" << dic.size() << endl;
	string eng;
	while (true) {
		cout << "ã�� ���� �ܾ� >>";
		getline(cin, eng);
		if (eng == "exit")break;
		if (dic.find(eng)==dic.end()) cout << "����" << endl;	// map���� eng������ ��ġ�ϴ� Ű�� ã�� ����
		else cout << dic[eng] << endl;
	}
	cout << "�����մϴ�..." << endl;
}