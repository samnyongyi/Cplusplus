#include <iostream>

using namespace std;	// cout�� ���ؼ� std:: ���ξ� ����� �����ϱ� ���� �ۼ�

int main(){
	cout << "�ʺ� �Է��ϼ��� >>";
	
	int width;
	cin >> width;	// ǥ�� �Է���ġ�� Ű���带 �����ϴ� C++ �Է� ��Ʈ�� ��ü, �Է� ���۸� �����ϰ� ������ enterŰ�� �Էµɶ����� �Էµ� Ű�� �Է� ���ۿ� ����, backspace Ű�� �Է½� �Էµ� Ű ����
// >> �����ڴ� ��Ʈ�� ���� ������, enterŰ�� �Էµ� �� cin�� �Է� ���ۿ��� Ű ���� �о� ������ ����
	cout << "���̸� �Է��ϼ���>>";	
	int height;	// �߰��� ���� ���� ����, �� ����ϱ����� �����ؾ� ���� �̹߻�
	cin >> height;
	
	int area = width*height;
	cout << "������" << area << "\n";
	return 0;
}
