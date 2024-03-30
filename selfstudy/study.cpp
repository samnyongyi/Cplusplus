#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;    // 이름
    int day;    // 생년월일

    double tem; // 체온
    string ex; // 기침 증상 유무
    bool boolean;   // 기침 증상 유무

    cout << "이름과 생년월일을 입력하세요."<<endl;
    cin >> name >> day; 

    cout << "체온과 기침 증상 유무(true/false)를 입력하세요." << endl;
    cin >> tem >> ex;  

    if (ex == "true") boolean = true;
    if (ex == "false") boolean = false;
    else {
        cout << "입력오류";
        return 0;   // true나 false가 아닌경우 강제종료
    }

    string temp1 = "감염되지 않았습니다."; // 증상
    if ((tem > 38.0) && (boolean == true)) {
        temp1 = "감염의심자";
    }

    cout << "신속항원검사 양성: 신속, PCR 검사 양성: 양성, PCR 검사 음성: 음성" <<endl;
    string result; // 검사결과
    cin >> result;

    if ((result == "신속") || (result == "PCR")) {
        if (temp1 == "감염의심자")
            temp1 = "확진자입니다";
        else
            temp1 = "감염의심자입니다. 검사를 받으세요.";
    }

    cout << name << " " << day << "\n";
    cout << temp1;

    return 0;
}