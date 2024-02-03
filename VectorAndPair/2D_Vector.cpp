//vector of vector
#include<iostream>
#include<vector>

using namespace std;

int main() {

    // vector<vector<int>> v;

    // vector<vector<int>> v(3,vector<int>(4));

    // vector<vector<int>> v(3,vector<int>(4,1));  //capacity 4,initialize with 1

    // int m = v.size();  //rows
    // int n = v[0].size();   //columns

    // for(int i=0 ; i<m ; i++){
    //     for(int j=0 ; j<n ;j++){
    //         cout<<v[i][j]<<" ";  
    //    }
    //    cout<<endl;
    // }
    // cout<<endl;



    vector<vector<int>> v = {{1, 2, 3},
                             {4, 5, 6},     
                             {7, 8, 9}};

    int m = v.size();  //rows
    int n = v[0].size();   //columns

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";                
        }
        cout<<endl;
    }
    cout<<endl;

    // for (auto row : v) {
    //     for (auto val : row)
    //         cout << val << " ";
    //     cout << endl;
    // }




    return 0;

}