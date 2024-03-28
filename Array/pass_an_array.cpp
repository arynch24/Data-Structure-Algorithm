#include <bits/stdc++.h>
using namespace std;

//a[] is a pointer
void fun(int a[], int n)
{
    cout<<sizeof(a)<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<sizeof(arr)<<endl;
    fun(arr,5);
}