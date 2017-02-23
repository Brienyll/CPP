#include <iostream>

using namespace std;

int main() {
	int x, y, temp; // declare 2 variables
	cout << "Enter 2 numbers\n"; 
	cin >> x >> y; //take 2 numbers from user
	cout << "X=" << x << ", Y=" << y << endl; //display X and Y
	temp = x; //swap x and y
	x = y;
	y = temp;
	cout << "X=" << x << ", Y=" << y << endl; //display X and Y
	system("Pause");
}
