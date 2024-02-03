#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    // string str = "coding blocks";

    // cout<<str.length()<<endl;
    // cout<<str.size()<<endl;

    string str1 = "new";
    string str2 = "delhi";

    // str1.append(" sd");
    // str1.append(" ").append(str2);

    // cout<<str1<<endl;

    str1 = str1 + " " + str2;
    cout<<str1<<endl;

    string str3 = "xy";
    string str4 = "xyz";

    
    // int x = str3.compare(str4);
    // cout<<str3.compare(str4)<<endl;
    // if (x == 1){
    //     cout<<"str 3 is greater";
    // }else{
    //     cout<<"str 4 is greater ";
    // }

    // string str5 = "mississippi";

    // cout<<str5.find("si")<<endl;
    // cout<<str5.rfind("si")<<endl;
    // cout<<str5.find("hello")<<endl;
    // cout<<string::npos<<endl;

    // string str6 = "newdelhi";
    // string substring = str6.substr(4);

    // cout<<substring<<endl; 

    // substring = str6.substr(4,2);

    // cout<<substring<<endl;


    // string str7 = "new delhi";
    // char* arr = (char*)str7.c_str();

    // cout<<arr<<endl;
    // cout<<arr[2];
    
    // char a[] = "hello world";
    // string str(a);
    // cout<<str<<endl;

    string st(10,'a');  //for making string with given size 10 , and a as content
    cout<<st<<endl;

    // string str9="coding blocks";

    // reverse(str9.begin(),str9.end());

    // cout<<str9<<endl;

    return 0;
}
