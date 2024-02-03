#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;  //here vector is class , <int> is type of member , v is object of class ;

    cout<<"size : "<<v.size()<<endl; 
    cout<<"capacity : "<<v.capacity()<<endl; 

    v.push_back(10);     //function for add member from last in vector 

    cout<<"size : "<<v.size()<<endl; 
    cout<<"capacity : "<<v.capacity()<<endl; 
 
    v.push_back(20);   

    cout<<"size : "<<v.size()<<endl; 
    cout<<"capacity : "<<v.capacity()<<endl; 
    
    v.push_back(30);   

    cout<<"size : "<<v.size()<<endl; 
    cout<<"capacity : "<<v.capacity()<<endl; 

    v.push_back(40);   

    cout<<"size : "<<v.size()<<endl; 
    cout<<"capacity : "<<v.capacity()<<endl; 
 
    v.push_back(50);   

    cout<<"size : "<<v.size()<<endl; 
    cout<<"capacity : "<<v.capacity()<<endl; 
 
    for(int i=0;i<v.size();i++){  //by using **FOR loop
        cout<<v[i]<<" ";
    }
    
    cout << endl;

    for(int x : v){   //by using **for each loop
        cout<<x<<" ";
    }

    cout << endl;

    for(auto it=v.begin() ,end=v.end(); it != end;it++){   //by using **pointer , auto is to autometically identify type of member in array.
        cout<<*it<<" ";
    }

    cout << endl;

    v.pop_back();    //function for remove member from last in vector

    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;

    for(auto x : v){
        cout<< x <<" ";
    }
    
    cout << endl;

    v.clear();    //function for remove all member from vector

    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    
    v.empty() ? cout<<"true, vector is empty "<<endl:  //function for finding vector is empty or not.
                cout<<"false,vector is non-empty"<<endl;

    return 0;
}