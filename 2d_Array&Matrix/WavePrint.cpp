#include<iostream>
using namespace std;

int main(){

    int mat[][3]={{1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9}};

    int m=3;
    int n=3;

    //iterate over column
    for (int j=0;j<n;j++){
        //print over the row for the jth column
        if(j%2==0){
            //print from top to bottom
            for(int i=0;i<m;i++){
            cout<<mat[i][j]<<" ";
         }
        }else{
            //print from bottom to top
            for(int i=m-1;i>=0;i--){
                cout<<mat[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}