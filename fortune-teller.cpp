//============================================================================
// Name        : fileIO.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

int main() {
	ifstream inputFile;
	//declare an input file
	inputFile.open("replies.txt", ios::in);

	char answer[30];
	string answers[20];
	int pos = 0;

	while(!inputFile.eof()) {
		inputFile.getline(answer, 30);
		answers[pos] = answer;
		pos++;
	

	cout<<"Think of a question for the fortune teller, "
				"\npress enter for the answer "<<endl;
		cin.ignore();
		cout<<getRandomReply(answers,20)<<endl;
	}
}
string getRandomReply(string replies[], int size) {
	srand(time(0));
	int randomNum = rand()%20;
	return replies[randomNum];
}

