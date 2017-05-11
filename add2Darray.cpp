#include <iostream>

using namespace std;

const int COLS = 4;
const int NROWS = 2;
void addSum(int array2d[][4], int NROWS);


int main() {
	int array2d[][4] = { {2,4,6,8}, {3,6,9,12} };
	addSum(array2d, 2);
	system("pause");
}

void addSum(int array2d[][4], int NROWS) {
	int sum = 0;
	for (int i = 0; i < NROWS; i++) {
		for (int j = 0; j < 4; j++) {
			sum += array2d[i][j];
		}
	}
	cout << sum << endl;
}
