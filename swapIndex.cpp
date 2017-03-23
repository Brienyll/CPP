#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;
int main() {
	int n[10];
	int index;
	int x, y, temp;
	for (int i = 0; i < 9; i++) {
		n[i] = rand() % 100 + 1;
		index = i;
		cout << n[i] << endl;
	}
	cout << "Enter 2 index to swap";
	cin >> x >> y;
	temp = n[x];
	n[x] = n[y];
	n[y] = temp;
	for (int i = 0; i < 9; i++) {
		index = i;
		cout << n[i] << endl;
	}
	system("pause");
}
