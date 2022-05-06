#pragma once
#ifndef Header
#define Header

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class student {
	string secondName;
	string name;
	string midName;
	int age;
	double examball;
	double weight;
	double height;
public:
	string getter();

	student(string secondName = "", string name = "", string midName = "", int age = 0, double examball = 0, double weight = 0, double height = 0);
	student& operator=(const student& stdnt);

	friend ostream& operator<<(ostream& os, const student& other);
	friend istream& operator>>(istream& is, student& other);

};

#endif Header