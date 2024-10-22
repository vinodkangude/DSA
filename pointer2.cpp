#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a=10;
    int *p;
    p=&a;
    cout<<a<<endl;
    printf("using pointer%d",*p);
    return 0;
}
