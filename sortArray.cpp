#include <iostream>

using namespace std;

void fillArray(int n[], int size);
void printArray(int n[], int size);
void swap(int n[],int i, int j);
void mySort(int n[], int size);

int main() {
	int num[10];
	//int min;
	fillArray(num, 10);
	printArray(num, 10);
	swap(num, 3, 8);
	printArray(num, 10);
	mySort(num, 10);
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

void swap(int n[], int i, int j) {
	int temp = 0;
	temp = n[i];
	n[i] = n[j];
	n[j] = temp;
	cout << "\n";
}


void mySort(int n[], int size) {
	int temp = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (n[i] < n[j]) {
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	cout << "\n";
}
