#include <iostream>
using namespace std;
 
int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
// Driver's code
int main(void)
{
     int N;
    cout<<"Enter n value value "<<endl;
    cin>>N;

    int x;
    cout<<"Enter target value "<<endl;
    cin>>x;
    
    int arr[100];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    // Function call
    int result = search(arr, N, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}