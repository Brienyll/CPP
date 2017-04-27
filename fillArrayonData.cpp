#include <iostream>
#include <fstream>

using namespace std;

void fillArray(int n[], int size);
void printArray(int n[], int size);

int main() {
	int num[10];
	fillArray(num, 10);
	printArray(num, 10);
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
