#include <string>
#include <locale>
#include <algorithm>
#include "functions.h"
using namespace std;



string updateProfile(string productName){ 
	//set up search haystack and needle
	string hp = "high profile";
	string lp = "low profile";
	
	//shallow copy and to lower
	string lowerProductName = productName;
	transform(lowerProductName.begin(), lowerProductName.end(), lowerProductName.begin(), ::tolower);
	
	//check for high profile
	size_t pos = lowerProductName.find(hp);

	if (pos != string::npos) {
		//move high profile to front
		productName = "High Profile " + productName.substr(0, pos) + productName.substr(pos + 12, string::npos);
		return productName;
	}
	
	//check for low profile
	size_t pos1 = lowerProductName.find(lp);
	if (pos1 != string::npos) {
		//move low profile to front
		productName = "Low Profile " + productName.substr(0, pos1) + productName.substr(pos1 + 11, string::npos);
		return productName;
	}

	return productName;
}
