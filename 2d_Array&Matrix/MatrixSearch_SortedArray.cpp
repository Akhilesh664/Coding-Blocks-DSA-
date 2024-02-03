//can use for sorted matrix

#include<iostream>
#include<algorithm>
using namespace std;

   //approach 2 - binary search o(m*logn) time
// bool searchTarget(int mat[][4], int m, int n, int t){

//     for(int i=0;i<m;i++){
//         if(binary_search(mat[i],mat[i+1],t)){
//             return 1;
//         }
//     }
//     return 0;
// }


 //approach 3 - 2 pointer approach o(m+n) time
bool searchTarget(int mat[][4], int m, int n, int t){

    int i=0;
    int j=n-1;

while(i<m and j>=0){
    if(mat[i][j]==t){
        return 1;
    }else if(mat[i][j]>t){
        j--;
    }else{
        i++;
    }
 }
 return 0;
}


int main(){

    int mat[][4]  = {{1, 2, 3, 4},
					 {5, 6, 7, 8},
					 {9, 10, 11, 12},
                     {13, 14, 15, 16}};

	int m = 4 ;
	int n = 4;

    int t = 100;

    searchTarget(mat,m,n,t)?cout<<t<<" found "<<endl:
    cout<<t<<" not found"<<endl;

    return 0;
}