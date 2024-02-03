#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	string str = "abcde";
	int n = str.size();

	// iterate over starting indices
    for(int i=0;i<n;i++){
		// iterate over ending indices
            for(int j=i;j<n;j++){
			// extract the substring that starts at the ith index and ends at the jth index
            for(int k=i;k<=j;k++){
                cout<<str[k];
            }
            // cout<<str.substr(i, j-i+1);
            cout<<endl;
        }
        cout<<endl;
    }
    	
	return 0;
}
