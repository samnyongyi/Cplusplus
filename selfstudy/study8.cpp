#include <iostream>
#include <string>	// string Ŭ������ ����ϱ����� �ʿ�
using namespace std;

int main() {
	string song("Falling in love with you"); 	// ���ڿ� song
	string elvis("Elvis Presley"); 
	string singer;	// ���ڿ��� ũ�⿡ ���� ������ ������ stringŬ������ ������ ���ڿ� ũ�⿡ �°� ���� ���� ����

	cout << song + "�� �θ� ������";		// + �� ���ڿ� ����, << ��밡��
	cout << "(��Ʈ : ù���ڴ� " << elvis[0] << ")?";	// E���

	getline(cin, singer); // ���ڿ� �Է�, getline()�� string Ÿ���� ���ڿ��� �Է¹ޱ� ���� �����Ǵ� ���� �Լ�), getline(ǥ���Է½�Ʈ����ü, ���ڿ���ü) �� �Է¹��ۿ��� ���ڿ��� ������ ���ڿ���ü�� ����
	if(singer == elvis) cout << "�¾ҽ��ϴ�.";
	else cout << "Ʋ�Ƚ��ϴ�. "+ elvis + "�Դϴ�." << endl; // +�� ���ڿ� ����
}

