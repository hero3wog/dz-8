#include "Header.h"

int menu(vector<student>& arr);

student addStudent();
void deleteStudent(vector<student>& arr, string bufName);
student spisok(vector<student>& arr);

int main() {
	vector<student> arr;
	menu(arr);
	return 0;
}