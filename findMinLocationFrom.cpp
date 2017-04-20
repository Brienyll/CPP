#include <iostream>

using namespace std;

void fillArray(int n[], int size);
void printArray(int n[], int size);
int findMinLocationFrom(int n[], int size, int start);

int main() {
	int num[10];
	int min;
	fillArray(num, 10);
	printArray(num, 10);
	cout << "Min = " << findMinLocationFrom(num, 10, 4) << endl;
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

int findMinLocationFrom(int n[], int size, int start) {
	int min = n[start];
	for (int i = start; i < size; i++) {
		if (n[i] < min) {
			min = n[i];
		}
	}
	return min;
}
