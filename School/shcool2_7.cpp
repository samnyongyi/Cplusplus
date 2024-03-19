#include <iostream>
#include <string>

using namespace std;

class Tower{
	int height;
public:	
	Tower(int h);
	Tower();	// ������ (�⺻) 
	int getHeight();	// �Լ� ����	
};

Tower :: Tower(){
	height=1;
}
Tower :: Tower(int h){
	height=h;
}
int Tower :: getHeight(){	// �Լ� ���� 
	return height;
}

int main(){
	Tower myTower;
	Tower seoulTower(100);
	cout<<"���̴� "<< myTower.getHeight()<<"����"<<endl;
	cout<<"���̴� "<< seoulTower.getHeight()<<"����"<<endl;	
	
	return 0;
}
