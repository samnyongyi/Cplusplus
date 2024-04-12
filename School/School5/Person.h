#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Person {
	char* name; int id;
public:
	Person(int id, const char* name);	
	Person(const Person& person);
	~Person();
	void changeName(const char* name)
		;
	void show() { cout << id << ',' << name << endl; }
};
