#include <iostream>

using namespace std;

int main() {
	int a; //declare a variable
	cout << "Enter a number" << endl;
	cin >> a; //get input	
	
	/*------------------- 
	//if number is positive add one
	if (a > 0) { 
		a++;
	}
	---------*/
	
	/*-----------------------
	if else statement
	if (a > 0) {
	a++;
	} else {
	a--;
	}
	-------------------------*/
	
	
	//else if statement // if number is a negative subtract one
	if (a > 0) { 
	  a++;
	} else if (a < 0) { 
		a--;
	} else {
	  a = 100;
	}
	
	
	cout << a << endl; //display number
	system("Pause");
}
