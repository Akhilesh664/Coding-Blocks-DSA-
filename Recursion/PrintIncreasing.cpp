#include<iostream>
#include<algorithm>

using namespace std;

    void f(int n){

        //base case
        if(n==0){
            //print nos. from 1 to 0 in increasing order
            return ;
        }

        //recursive case

        // 1. ask your friend to print nos. from 1 to n-1 in increasing order
        f(n-1);

        cout<<n<<" ";  
    }

int main(){

    int n;
    cout<<"enter n value : ";
    cin>>n;

    f(n);

    return 0;
}