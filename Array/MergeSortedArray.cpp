#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    int arr[20];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cin >> m;
    int brr[10];
    for(int i=0; i<m; i++) {
        cin >> brr[i];
    }
    // int crr[20];


    //1st  approach . time : O(m+n)  ,  space :(m+n)
    // int i = 0;
    // int j = 0;
    // int k = 0;

    // while(i<n and j<m){
    //     if(arr[i]<brr[j]){
    //         crr[k]=arr[i];
    //         i++;
    //         k++;
    //     }else{
    //         crr[k]=brr[j];
    //         j++;
    //         k++;
    //     }
    // }
    
    // //if left out value are still there
    // while(i<n){
    //     crr[k] = arr[i];
    //     i++;
    //     k++;
    // }
    //  //if left out value are still there
    // while(j<m){
    //     crr[k] = brr[j];
    //     j++;
    //     k++;
    // }


    //2nd approach . time : m+n space : o(1)
    
    int i = n-1;
    int j = m-1;
    int k = m+n-1;

    while (i>=0 and j>=0){
        if(arr[i]>brr[j]){
            arr[k]=arr[i];
            i--;
            k--;    
        }else{
            arr[k]=brr[j];
            j--;
            k--;
        }
    }

    while(j>=0){
        arr[k] = brr[j];
        j--;
        k--;
    }

    for(int k=0; k<n+m; k++){
    cout<<arr[k]<<" ";
    } 
    cout<<endl;
 
    return 0;
}    