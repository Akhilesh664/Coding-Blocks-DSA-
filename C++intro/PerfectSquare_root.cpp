#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter a non-negative integer : ";
    cin>>n;

    double rn=0;
    while(rn*rn <= n){
            rn=rn+1;    
    }

    rn=rn-1;

    while(rn*rn <= n){
            rn=rn+0.1;
    }

    rn=rn-0.1;

    while(rn*rn <= n){
            rn=rn+0.01;
    }

    rn=rn-0.01;

    cout<<"sqrt("<< n <<") = "<< rn <<endl;

    return 0;

}