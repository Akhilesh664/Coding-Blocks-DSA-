#include <iostream>

using namespace std;


int main() {

    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int n = sizeof(arr)/sizeof(int);

    int t=70;
    int s=0;
    int e=n-1;
 

    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==t){
            cout<<t<<" target is found at index "<<m<<endl;
            break;
        }else if(arr[m]>t){
            e=m-1;
        }else if(arr[m]<t){
            s=m+1;
        }
    }
    if(s>e){
        cout<<"not found in array"<<endl;
    }


    return 0;
}