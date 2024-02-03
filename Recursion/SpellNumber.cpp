#include<iostream>
#include<algorithm>

using namespace std;

string spellingMap[] = { "zero", "one", "two", "three",
                         "four", "five", "six", "seven",
                       	 "eight", "nine"};

void SpellNumber(int x){

    //base case
    if(x == 0){
        return ;
    }

    //recursive case
    
    // 1. ask your friend to print the spelling of n/10
    SpellNumber(x/10);
    int d = x % 10;
    cout<<spellingMap[d]<<" "; 
}

int main(){

    int x;
    cout<<"enter value of x : "<<endl;
    cin>>x;

    SpellNumber(x);

    return 0;
}