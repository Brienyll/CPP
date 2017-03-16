#include <iostream>
#include <stdlib.h>


using namespace std;

int main() {

	int sum = 0;
	int n[10];
	int num;
	bool found;
	found = false;
	for (int i = 0; i <= 9; i++) {
		n[i] = rand()%100+1;
		cout << n[i] << endl;
	}
	
	cout << "Enter A number" << endl;

	cin >> num;
	
	
	for (int i = 0; i <=9; i++) {
		
		if (num == n[i]) {
			found = true;
			if (found == true) {
				cout << "Yes" << endl;
				break;
			}
		}
			else
				cout << "no" << endl;
			break;
	}
	//cout << sum << endl;
	system("pause");
}
