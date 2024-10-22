#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r ={10,5};
    struct rectangle *p = r;
    r.length=15;
    (*p).length=20;
    p ->length=20;
    return 0;
}