#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
	map<string, string> dic;	// 맵 컨테이너 생성, 키는 영어단어, 값은 한글 단어	
	dic.insert(make_pair("love", "사랑"));	// ("love", "사랑") 저장
	dic.insert(make_pair("apple", "사과"));
	dic["cherry"] = "체리";	// ("cherry", "체리") 저장

	cout << "저장된 단어 개수" << dic.size() << endl;
	string eng;
	while (true) {
		cout << "찾고 싶은 단어 >>";
		getline(cin, eng);
		if (eng == "exit")break;
		if (dic.find(eng)==dic.end()) cout << "없음" << endl;	// map에서 eng변수와 일치하는 키를 찾는 역할
		else cout << dic[eng] << endl;
	}
	cout << "종료합니다..." << endl;
}