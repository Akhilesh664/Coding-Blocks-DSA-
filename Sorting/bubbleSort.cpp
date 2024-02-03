// time complexity : O(n2)
#include<iostream>
using namespace std;

int main(){

    int arr[]={4,2,-18,45,30};
    int n=sizeof(arr)/sizeof(int);

    //iterate over whole array (1<i<n-1) time
    for(int i=1;i<n;i++){
        bool flag = false;
        //iterate over commparison possible(0<j<n-i)
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }    
        if(flag==false){
            break;
        }      
    }
    //print sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
} 