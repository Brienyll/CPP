/*
dollarcents.cpp
Apr 17, 2017
Brix Angeles
*/
#include <iostream>

using namespace std;

int main(){
//place code here
	int dollars, cents;
	double price;
	char dollarSign = 36;
	cout << "Enter price in dollars and cents: " << endl;
	cin >> price;
	dollars = price;
	cents = price * 100 - dollars * 100;
	cout << "Total dollars: " << dollarSign << dollars << " cents: " << cents <<endl;
	return 0;
}
