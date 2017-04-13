#include <iostream>

using namespace std;
//prototypes
void printHello();
void getNums(int &n1, int &n2);
void addNums(int n1, int n2, int &n3);
void printRes(int n1);

int main() {
	int x, y, z;
	printHello();
	getNums(x, y);
	addNums(x, y, z);
	printRes(z);
	system("pause");
}
//functions
void printHello() {
	cout << "Hello" << endl;
}

void getNums(int &n1, int &n2) {
	cin >> n1 >> n2;
}

void addNums(int n1, int n2, int &n3) {
	n3 = n1 + n2;
}

void printRes(int n1) {
	printf("Sum is = %i\n", n1);
}
