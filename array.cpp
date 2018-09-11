#include <iostream>
#include <cmath>

using namespace std;

void show(const unsigned ar[], unsigned els);
bool eq(const int ar[], unsigned els);
double sum(const double ar[], unsigned els);

int main() {
	unsigned abc[] = { 2, 4, 6, 8 };
	int abcd[4] = { 2, 4, 6, 2 };
	double abcde[4] = { -2, 4, -6, 2 };
	show(abc, 3);
	cout << eq(abcd, 3) << endl;
	cout << sum(abcde, 4) << endl;
	system("pause");
	return 0;
}

void show(const unsigned ar[], unsigned els) {
	for (unsigned n = 0; n <= els; n++) {
		if (n == els) {
			cout << ar[n] << endl;
		}
		else {
			cout << ar[n] << ",";
		}
	}
}

bool eq(const int ar[], unsigned els) {
	for (unsigned m = 0; m <= els; m++) {
		for (unsigned n = m + 1; n <= els; n++)
		if (abs(ar[m]) == abs(ar[n])) {
			return true;
		}
	 return false;
	}
}

double sum(const double ar[], unsigned els) {
	double result = 0;
	for (unsigned n = 0; n < els; n++) {
		if (ar[n] < 0) {
			result += ar[n+1];
		}
	}
	return result;
}
