#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main() {
	char name1[] = "Brix";
	char name3[] = "Hello";
	string name2 = "Flor";
	
	int a = strcmp(name1, name3);

	int b = strlen(name3);
	cout << a << endl;


	cout << b << endl;
	system("pause");
}

