namespace kitae {	// kitae.h, �̸����� kitae ����, �̸� �浹�� ���ϱ� ���� 
namespace Ű���带 ���
	int f();
	void m()
}
namespace mike {	// mike.h, �̸����� mike ����
	int f();
	int g();
}

#include ��mike.h��	// kitae.cpp, ����ڰ� ���� mike.h�� ��������� ���

namespace kitae {	
	int f() {	
	return 1;
	}
	void m() {
		f();	// kitae.cpp�� ������ �ִ� f()�Լ��� ���
		mike::f();	// mike.cpp�� ������ �ִ� f()�Լ��� ���
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
