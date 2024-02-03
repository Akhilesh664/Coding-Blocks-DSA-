#include<iostream>
#include<algorithm>

using namespace std;

int factorial(int n){
    //base case
    if(n==0){
        // compute 0!
        return 1;
    }
    //recursive case

    //1. ask your friend to comute (n-1)!
    int A = factorial(n-1);
    return n*A;  // or  return n*factorial(n-1);
}

int main(){

    int n;
    cout<<"enter n value :"<<endl;
    cin>>n;

    cout<<factorial(n)<<endl;


    return 0;
}