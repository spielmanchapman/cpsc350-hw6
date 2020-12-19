#include "sort.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(int argc, char** argv){
	char userInput;
	string reader;
	ifstream readFile ("null.txt");
	cout << "------------------------------" << endl;
	cout << "Please enter the name of the text file: " << endl;
	cout << "------------------------------" << endl;
	cin >> userInput;
	//if (userInput.length() == 0){
		//cout << "Error, please enter a valid name!\n";
	//}
	//else{
		cout << "Reading file...\n";
		if (readFile.is_open()){
			while (getline (readFile,reader)){
				cout << "File located! Reading values now...";
			}
			readFile.close();
		}
		else cout << "Error, can't find this file!\n"; 
	//}
	return 0;
}
