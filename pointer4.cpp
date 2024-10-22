#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p;
    p=(int*)malloc(5*sizeof(int));
    p =new int[5];
    p[0]=10 ;p[1]=12 ;p[2]=14; p[3]=16; p[4]=18;
    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;
    return 0;
    
}