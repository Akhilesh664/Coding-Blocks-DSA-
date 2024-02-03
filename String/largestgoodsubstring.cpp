#include<iostream>
#include<cstring>

using namespace std;

bool isGoodString(string str) {	
	for(int i=0; str[i] != '\0'; i++) {
		char ch = str[i];
		if(!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
			// ch is consonant, not a vowel
			return false;
		}
	}

	return true;
}



int main()
{

    string str = "'cbaeicdeiou";
    int n=str.size();

    int max_len=0;

    // approach - o(n^3)

    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //       string substring = str.substr(i,j-i+1);

    //       if(isGoodString(substring)){
    //         max_len=max(max_len,j-i+1);

    //       }
    //     }
    // }

    //approach o(n) with sliding window method

    int count = 0;
    for(int i = 0;str[i] !='\0'; i++){
        char ch = str [i];

        if((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')){
            count++;
            max_len = max(max_len,count); 
        }else{
            count=0;
        }
    }

    cout<<"length of the longest goodsubstring = "<<max_len<<endl;


    return 0;

}