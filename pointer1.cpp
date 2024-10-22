#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p;
    p=(int *)malloc(5*sizeof(int));
    
    p=new int[5];
    return 0;
}