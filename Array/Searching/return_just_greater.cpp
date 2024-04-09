#include<iostream>
using namespace std;

//if not found target element retuurn index of element just greater than target value

int index(int arr[],int n, int target)
{
    int start=0,end=n-1,mid;
    int index=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        index=mid;
        else if(arr[mid]>target)
        {index=mid;
        end=mid-1;}
        else
        start=mid+1;
    }
    return index;
}

int main()
{
    //input a sorted array
    //enter distinct values
    
    int n;
    cout<<"Enter the number of element in an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for (int i=0;i<n;i++)
    cin>>arr[i];

    int target;
    cout<<"Enter the target: ";
    cin>>target;
    
    cout<<index(arr,n,target);
}