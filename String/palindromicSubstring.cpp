#include<iostream>

using namespace std;

int countSubstrings(string s) {

	int count = 0; // to track the no. of palindromic substrings in the given string
	int n = s.size();   

    //#odd center =n,#even center =n-1 both ~2n-1 and we work worst timme n/2 time ~approach o(n^2)time

    // 1. count the no. of odd-length palindromic substrings

    for(int i=0;i<n;i++){
        int j=0;
        while(i-j>=0 and i+j<n and s[i-j]==s[i+j]){
            count++;
            j++;

        }
    }
    // 2. count the no. of even-length palindromic substrings

     for(float i=0.5;i<n;i++){
        float j=0.5;
        while(i-j>=0 and i+j<n and s[(int)(i-j)]==s[(int)(i+j)]){
            count++;
            j++;

        }
    }

    return count;
}

int main() {

	string s = "abaaba";
	
	cout << countSubstrings(s) << endl;
	
	return 0;
}