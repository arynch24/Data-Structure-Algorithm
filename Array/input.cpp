#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    //int arr[size];//bad habit as it varies -->> it leads to increase chances of error in our  code.
    int arr[1000];//instead keep it constant .
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
   
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}