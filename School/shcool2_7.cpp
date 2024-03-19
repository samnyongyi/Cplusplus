#include <iostream>
#include <string>

using namespace std;

class Tower{
	int height;
public:	
	Tower(int h);
	Tower();	// 생성자 (기본) 
	int getHeight();	// 함수 원형	
};

Tower :: Tower(){
	height=1;
}
Tower :: Tower(int h){
	height=h;
}
int Tower :: getHeight(){	// 함수 구현 
	return height;
}

int main(){
	Tower myTower;
	Tower seoulTower(100);
	cout<<"높이는 "<< myTower.getHeight()<<"미터"<<endl;
	cout<<"높이는 "<< seoulTower.getHeight()<<"미터"<<endl;	
	
	return 0;
}
