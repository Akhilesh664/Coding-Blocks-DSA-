//for unsorted matrix

#include<iostream>
using namespace std;

//approach 1 - linear search o(m+n) time
bool searchTarget(int mat[][3], int m, int n, int t){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==t){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int mat[][3]  = {{50, 80, 20},
					 {90, 10, 70},
					 {60, 30, 40}};

	int m = 3;
	int n = 3;

    int t = 70;

    searchTarget(mat,m,n,t)?cout<<t<<" found "<<endl:
    cout<<t<<" not found"<<endl;

    return 0;
}