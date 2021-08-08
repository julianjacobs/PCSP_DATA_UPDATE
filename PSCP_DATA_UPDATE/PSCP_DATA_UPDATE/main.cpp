#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;







int main(int argc, char* argv[]) {
	//check if we have right amount of cmd arguements
	if (argc != 2) {
		cout << "wrong input format";
		return 0;
	}
	
	//get file name
	string fileName = argv[1];
	
	//initialize in and out streams
	ofstream outFile("PI.txt");
	ifstream file;
	file.open(fileName);
	
	//check if file got opened properly.
	if (!file.is_open()) {
		cout << "bad file name";
		return 0;
	}
	
	string currentLine;
	//skip first line (excel header)
	getline(file, currentLine);
	//read other rows
	while (getline(file, currentLine)) {
		//read col
		stringstream ss(currentLine);
		string sku, productName;
		//first value is sku
		getline(ss, sku, ',');
		//second value is name of sku which we want to edit
		getline(ss, productName, ',');

	}
	


}