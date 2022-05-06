#include "Header.h"

student::student(string secondName, string name, string midName, int age, double examball, double weight, double height) {
	this->secondName = secondName;
	this->name = name;
	this->midName = midName;
	this->age = age;
	this->examball = examball;
	this->weight = weight;
	this->height = height;
}

string student::getter() { return secondName; }

student& student::operator=(const student& stdnt) {
	if (this == &stdnt)
		return *this;

	secondName = stdnt.secondName;
	name = stdnt.name;
	midName = stdnt.midName;
	age = stdnt.age;
	examball = stdnt.examball;
	weight = stdnt.weight;
	height = stdnt.height;
	return *this;

}

ostream& operator<<(ostream& os, const student& other) {
	os << "Secondname: " << other.secondName << endl;
	os << "Name: " << other.name << endl;
	os << "Midname: " << other.midName << endl;
	os << "Age: " << other.age << endl;
	os << "Exam ball: " << other.examball << endl;
	os << "weight: " << other.weight << endl;
	os << "height: " << other.height << endl;
	cout << endl;
	return os;
}

istream& operator>>(istream& is, student& other) {
	cout << "Secondname: ";
	is >> other.secondName;
	cout << "Name: ";
	is >> other.name;
	cout << "Midname: ";
	is >> other.midName;
	cout << "Age: ";
	is >> other.age;
	cout << "Exam ball: ";
	is >> other.examball;
	cout << "weight: ";
	is >> other.weight;
	cout << "height: ";
	is >> other.height;
	cout << endl;
	return is;
}


student addStudent() {
	student newStudent;
	cin >> newStudent;
	return newStudent;
}

void deleteStudent(vector<student>& arr, string q) {
	bool isFind = false;
	for (int i = 0; i < arr.size(); ++i) {
		if (arr[i].getter() == q) {
			arr.erase(arr.begin() + i);
			isFind = true;
			cout << "udalen" << endl << endl;
			break;
		}
	}
	if (!isFind)
		cout << "ne naideno" << endl << endl;
}

void spisok(vector<student>& arr) {
	for (int i = 0; i < arr.size(); ++i) {
		student a;
		a = arr[i];
			cout << a;
	}
}

int menu(vector<student>& arr) {
	cout << "1 - dobavit` studenta \n2 - udalit` studenta \n3 - informaciya o studentah \n4 - exit\n";
	int vibor = 0;
	string sn = "";
	cin >> vibor;
	cout << endl;
	if (vibor < 1 or vibor > 4)
		return -1;
	switch (vibor) {
	case 1:
		arr.push_back(addStudent());
		menu(arr);
		break;
	case 2:
		cout << "vvedite secondname: ";
		cin >> sn;
		deleteStudent(arr, sn);
		menu(arr);
		break;
	case 3:
		
		spisok(arr);
		menu(arr);
		break;
	case 4:
		return 0;
	default:
		menu(arr);
	}

}