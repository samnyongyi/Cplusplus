namespace kitae {	// kitae.h, 이름공간 kitae 생성, 이름 충돌을 피하기 위해 
namespace 키워드를 사용
	int f();
	void m()
}
namespace mike {	// mike.h, 이름공간 mike 생성
	int f();
	int g();
}

#include “mike.h”	// kitae.cpp, 사용자가 만든 mike.h의 헤더파일을 사용

namespace kitae {	
	int f() {	
	return 1;
	}
	void m() {
		f();	// kitae.cpp가 가지고 있는 f()함수를 사용
		mike::f();	// mike.cpp가 가지고 있는 f()함수를 사용
	}
}

namespace mike {	// mike.cpp
	int f() {
		return -1;
	}
	int g() {
		return 0;
	}
}
