#include<iostream>
using namespace std;

int main() {
	
    int mat[][10]  = {{1, 2, 3, 4},
					 {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
	int m = 4;
	int n = 4;

    int sr = 0;
    int sc = 0;
    int er = m-1;
    int ec = n-1;

    while(sr <= er and sc <= ec){
        for(int j=sc;j<=ec;j++){
            cout<<mat[sr][j]<<" ";
        }
        sr++;

        for(int i=sr;i<=er;i++){
            cout<<mat[i][ec]<<" ";
        }
        ec--;
        if(sr<=er){
            for(int j=ec;j>=sc;j--){
                cout<<mat[er][j]<<" ";
            }
            er--;
        }
        if(sc<=ec){    
            for(int i=er;i>=sr;i--){
                cout<<mat[i][sc]<<" ";
            }
            sc++;
        }
    }

	return 0;
}