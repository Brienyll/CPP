#include <iostream>
#include <fstream>


using namespace std;

void fillArray(int n[], int size);
void printArray(int n[], int size);
void readData(int n[]);
void findCount(int n[], int size, int num);

int main() {
	int num[1000];
	fillArray(num, 1000);
	printArray(num, 1000);
	//	findNumber(num, 1000, 19);
	readData(num);
	findCount(num, 1000, 19);
	system("pause");
}

void fillArray(int n[], int size) {
	for (int i = 0; i < size; i++) {
		n[i] = rand() % 100;
	}
}

void printArray(int n[], int size) {
	ofstream outData;
	outData.open("C:\\temp\\test.txt", ios::app);
	for (int i = 0; i < size; i++) {
		outData << n[i] << endl;
	}
	outData.close();
}

void findCount(int n[], int size, int num) {
	ofstream outData;
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (n[i] == num) {
			count += 1;
		}
	}

	outData.open("C:\\temp\\test.txt", ios::app);
	outData << "count is: " << count << endl;
	outData.close();
}
void readData(int n[]) {
	ifstream inData;
	int i;

	inData.open("C:\\temp\\test.txt");
	while (!inData.eof()) {

		inData >> i;
		inData.close();
	}
}
