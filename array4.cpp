#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int a[n];
    a[0]=12;
    a[1]=15;
    a[2]=17;
    for(int x:a)
    {
        cout<<x<<endl;
    }
    return 0;
}