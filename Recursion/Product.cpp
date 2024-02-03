#include<iostream>
#include<algorithm>

using namespace std;

int Product( int x , int y ){
    
    //base case
    if( y==0 ){
        //compute x*0 i.e. add x,0 times
        return 0;
    }

    //recursive case
    // 1. ask your friend to compute x*(y-1) i.e. add x,y-1;

    int A = Product( x , y-1 );

    return x+A;  // we can say x multiply y times

}
int main(){

    int x,y;
    cout<<"Enter value of x : "<<endl;
    cin>>x;
    cout<<"Enter value of y : "<<endl;
    cin>>y;

    cout<< Product( x , y ) <<endl;

    return 0;
}