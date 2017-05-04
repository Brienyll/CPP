#include <iostream>
#include <fstream>
#include <string>

//std::ifstream inData("C:\\temp\\students1.txt");

using namespace std;


struct st_type {
	string lastName;
	string firstName;
	int studentId;
	double gpa;
	int prog[5];
};

void readRecords(st_type st[], int size);
void createFile(st_type st[], int size);

int main() {
	st_type students[5];
	readRecords(students, 5);
	createFile(students, 5);
}

void readRecords(st_type st[], int size) {
	ifstream inData;
	inData.open("C:\\temp\\students.txt");
	for (int i=0; i < size; i++){
		inData >> st[i].lastName;
		inData >> st[i].firstName;
		inData  >> st[i].studentId;
		inData  >> st[i].gpa;
	}
	inData.close();
}
void createFile(st_type st[], int size) {
	ofstream outData;
	outData.open("C:\\temp\\students1.txt");
	for (int i = 0; i < size; i++) {
		outData << " " << st[i].lastName ;
		outData << " " << st[i].firstName;
		outData << " " << st[i].studentId ;
		outData << " " << st[i].gpa << endl;
	}
	outData.close();
}

