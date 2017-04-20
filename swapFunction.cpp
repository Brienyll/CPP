#include <iostream>

using namespace std;

void fillArray(int n[], int size);
void printArray(int n[], int size);
void swap(int n[],int j, int k);

int main() {
	int num[10];
	int min;
	fillArray(num, 10);
	printArray(num, 10);
	swap(num, 3, 8);
	printArray(num, 10);
	system("pause");
}

void fillArray(int n[], int size) {
	for (int i = 0; i < size; i++) {
		n[i] = rand() % 100;
	}
}

void printArray(int n[], int size) {
	for (int i = 0; i < size; i++) {
		cout << n[i] << endl;
	}
}

void swap(int n[], int j, int k) {
	int temp = 0;
	temp = n[j];
	n[j] = n[k];
	n[k] = temp;
}
