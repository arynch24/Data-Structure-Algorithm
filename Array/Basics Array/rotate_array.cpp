#include <bits/stdc++.h>
using namespace std;
int main()
{
    int temp;
    int arr[6]={2,7,4,11,5,8};
    temp=arr[5];
    for(int i=5;i>=1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}