#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int n=sizeof(arr)/sizeof(int);
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}