#pragma once
class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool equals(Rect r, Rect s);	// private width, height ���� ����
	// ������ �Լ�: Ŭ���� ��� �Լ��� �ƴ� �ܺ� �Լ�(�����Լ�), �ٸ� Ŭ������ ��� �Լ�, �ٸ� Ŭ���� ��ü
	// Ŭ������ ��� �ڰݰ� ��� ����� ������ �� �ִ� ������ �ο�
};
