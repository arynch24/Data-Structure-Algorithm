#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,3,4,33};
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
cout<<endl;
    int arr1[7]={1,2,3};//by default rest index have value zero
    for(int i=0;i<7;i++)
    cout<<arr1[i]<<" ";
cout<<endl;
    int arr2[7]={0};//it happens only in case of zero.
    for(int i=0;i<7;i++)
    cout<<arr2[i]<<" ";
}