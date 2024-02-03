#include<iostream>
using namespace std;

int main(){
    //inversing array by indexing 
    int arr[]={2,0,4,1,3};
    int n=sizeof(arr)/sizeof(int);

    int brr[20];
    for(int i=0 ; i<=n ; i++ ){
        //idx = i; val= arr[i]
        brr[arr[i]]= i;
    }

    for(int j=0;j<n;j++){
    cout<<brr[j]<<" ";
    }
    return 0;
}    