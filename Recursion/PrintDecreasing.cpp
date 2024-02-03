#include<iostream>
#include<algorithm>

using namespace std;

    void f(int n){

        //base case
        if(n==0){
            //print nos. from 1 to 0 in decreasing order
            return ;
        }

        //recursive case

        // 1. ask your friend to print nos. from n-1 to 1 in decreasing order
        cout<< n <<" ";       
        f(n-1);
        
    }

int main(){

    int n;
    cout<<"enter n value : ";
    cin>>n;

    f(n);

    return 0;
}