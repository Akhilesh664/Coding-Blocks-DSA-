#include<iostream>
#include<algorithm>

using namespace std;

int Power(int x , int y){
    //base case
    if(y==0){
        //comute x^0
        return 1;
    }

    //recursive case

    // 1. friend will compute from x^(y-1)
    int A =  Power(x , (y-1));

    return x*A;

}
int main(){

    int x,y;
    cout<<"Enter value of x : "<<endl;
    cin>>x;
    cout<<"Enter value of y : "<<endl;
    cin>>y;


    cout<<"power of "<<x<<"^"<<y<<endl;
    cout<< Power( x , y ) <<endl;

    return 0;
}