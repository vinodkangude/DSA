#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
    r=25;
    cout<<a<<endl;
    cout<<r<<endl;
    return 0;
}