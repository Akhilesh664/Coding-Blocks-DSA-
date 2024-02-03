// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a[10][10];
    
    int m;
    cout<<"enter no. of row :";
    cin>>m;
    
    int n;
    cout<<"enter no of column :";
    cin>>n;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    //for row wise printing
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
          cout<<endl;
    }
    // // for column wise printing
    //      for(int j=0;j<n;j++){
    //     for(int i=0;i<m;i++){
    //         cout<<a[i][j]<<" ";
    //     }
    //       cout<<endl;
    // }
  
    return 0;
}