#include <fstream>
#include <iostream>
using namespace std;







int main(int argc, char* argv[]) {
	if (argc != 2) {
		cout << "wrong input format";
		return 0;
	}
	string fileName = argv[2];
	fstream file;
	file.open(fileName);
	if (!file) {
		cout << "bad file name";
		return 0;
	}




}