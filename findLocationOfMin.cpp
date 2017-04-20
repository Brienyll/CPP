#include <iostream>

using namespace std;

void fillArray(int n[], int size);
void printArray(int n[], int size);
int findLocation(int n[], int size);

int main() {
	int num[10];
	int min;
	fillArray(num, 10);
	printArray(num, 10);
	cout << "Location = " << findLocation(num, 10) << endl;
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

int findLocation(int n[], int size) {
	int min = n[0];
	int loc = n[0];
	for (int i = 1; i < size; i++) {
		if (n[i] < min) {
			min = n[i];
			loc = i;
		}
	}
	return loc;
}
