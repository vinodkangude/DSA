#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
    cout<<a;
    r++;
    cout<<r<<endl;
    cout<<a;
    return 0;
}
