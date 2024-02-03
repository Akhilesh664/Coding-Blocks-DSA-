#include<iostream>

using namespace std;

int main() 
{
    string str;
    str = "coding blocks";
    cout<<""<< str <<""<<endl;

    for (int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str[0]<<endl;
    cout<<str[1]<<endl;

    string str2="new jaipur";
    cout<<str2<<endl;


    string str3 = str2;

    cout<<str3<<endl;

    // string str5;

    // cout<<"enter str5"<<endl;

    // cin>>str5;
    // cout<<str5<<endl;

    // string str6;

    // getline(cin,str6);
    // cout<<str6<<endl;

    
    string str7;

    getline(cin,str7);
    cout<<str7<<endl;
    
    
	return 0;
}