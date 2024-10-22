#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void countingsort(int arr[],int n)
{
    int maxval=INT8_MAX;
    int minval=INT8_MIN;
    for(int i=0;i<n;i++)
    {
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        freq[arr[i]] ++;
    }
    for(int i=minval,j=0;i<=maxval;i++)
    {
        while(freq[i]>0)
        {
            arr[j++]=i;
            freq[i]--;
        }
    }
    print(arr,n);
}
int main()
{
    int arr[8]={1,4,1,3,2,4,3,7};
    countingsort(arr,8);
    return 0;
}