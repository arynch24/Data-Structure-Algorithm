
//To find first and last position of elements in sorted array

#include <iostream>
#include<vector>
using namespace std;

int first_position(int arr[],int n,int target)
{
    int start=0,end=n-1,mid;
    int first=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]>target)
        end=mid-1;

        else
        start=mid+1;
    }
    return first;
}

int last_position(int arr[],int n,int target)
{
    int start=0,end=n-1,mid;
    int last=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]>target)
        end=mid-1;

        else
        start=mid+1;
    }
    return last;
}




int main()
{
    //input a sorted array
   
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
    int first=first_position(arr,n,target);
    int last=last_position(arr,n,target);
    cout<<"First Position: "<<first<<endl;
    cout<<"Last Position: "<<last<<endl;
}