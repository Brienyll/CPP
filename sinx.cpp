#include <iostream>
#include <cmath>
using namespace std;


double factorial(int n);

int main() {
	int n = 30;
	double x;
	cin >> x;

	double sum = 0;
	int k = -1;
	for (int i = 1; i <= n; i += 2) {
		k *= -1;
		sum += k*pow(x*3.14 / 180, i) / factorial(i);
	}
	cout << "sin = " << sum << endl;
	system("pause");
}


double factorial(int n) {
	int i;
	double fac = 1;
	for (i = 2; i <= n; i++)
		fac = fac*i;
	return fac;
	
}
