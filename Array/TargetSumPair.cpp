#include<iostream>
using namespace std;

int main(){
    //sorted array is given
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    int t = 50;
    int count=0;

    // // 1st  approach O(n^2)
    // for(int i=0;i<=n-2;i++){
    //     for(int j=i+1;j<n;j++){
    //     int total=arr[i]+arr[j];
    //        cout<<arr[i]<<" "<<arr[j]<<endl; 
 
    //         if(total==t){
    //             count++;
    //         }
    //     }
    //     cout<<endl;
    // } 

    //2nd  approach O(n)
    int i=0;
    int j=n-1;

    while(i<j){
        int sum_ij=arr[i]+arr[j];

        if(sum_ij==t){
            count++;
            i++;
            j--;
        }else if(sum_ij>t){
            j--;
        }else{
            i++;
        }
    }

    cout<<count<<endl;
    return 0;
}    