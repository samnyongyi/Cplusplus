#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;    // �̸�
    int day;    // �������

    double tem; // ü��
    string ex; // ��ħ ���� ����
    bool boolean;   // ��ħ ���� ����

    cout << "�̸��� ��������� �Է��ϼ���."<<endl;
    cin >> name >> day; 

    cout << "ü�°� ��ħ ���� ����(true/false)�� �Է��ϼ���." << endl;
    cin >> tem >> ex;  

    if (ex == "true") boolean = true;
    if (ex == "false") boolean = false;
    else {
        cout << "�Է¿���";
        return 0;   // true�� false�� �ƴѰ�� ��������
    }

    string temp1 = "�������� �ʾҽ��ϴ�."; // ����
    if ((tem > 38.0) && (boolean == true)) {
        temp1 = "�����ǽ���";
    }

    cout << "�ż��׿��˻� �缺: �ż�, PCR �˻� �缺: �缺, PCR �˻� ����: ����" <<endl;
    string result; // �˻���
    cin >> result;

    if ((result == "�ż�") || (result == "PCR")) {
        if (temp1 == "�����ǽ���")
            temp1 = "Ȯ�����Դϴ�";
        else
            temp1 = "�����ǽ����Դϴ�. �˻縦 ��������.";
    }

    cout << name << " " << day << "\n";
    cout << temp1;

    return 0;
}