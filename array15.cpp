#include<iostream>
using namespace std;
int main()
{
    int marks[]={1,2,3,4};
    {
        cout<<marks[0]<<endl;
        cout<<marks[1]<<endl;
        cout<<marks[2]<<endl;
        cout<<marks[3]<<endl;
        cout<<marks[4]<<endl;
        cout<<sizeof(marks)<<endl;
        cout<<sizeof(marks)/sizeof(int);
    }
    return 0;
}