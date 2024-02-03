#include<iostream>

using namespace std;

int stringToInteger(string str, int n) {

	// base case
	if(str == "") { // str.empty() or str.size() == 0 or n == 0
		return 0;
	}

	// recursive case

    string subString = str.substr(0,n-1);
    int A = stringToInteger(subString , n-1);

    return A*10 + str[n-1]-'0';  // where *10 make 0 in last of int and str[n-1]-'0' mean string* ascii no diff [n-1] ,0 give int value 
}

int main() {

	string str = "1234";
	int n = str.size();

	int integer = stringToInteger(str, n);
    cout <<"string : "<< str << endl;
	cout <<"integer : "<< integer << endl;

	return 0;
}