#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};

