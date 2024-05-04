#pragma once
class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool equals(Rect r, Rect s);	// private width, height 접근 가능
	// 프렌드 함수: 클래스 멤버 함수가 아닌 외부 함수(전역함수), 다른 클래스의 멤버 함수, 다른 클래스 전체
	// 클래스의 멤버 자격과 모든 멤버를 접근할 수 있는 권한을 부여
};
