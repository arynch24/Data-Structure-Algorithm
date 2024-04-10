//binary search can be used not only in increasing array 
//bu can also in inc than dec
// dec than inc
//only increasing and only decreasing.


//to find the max value index in an arrray using binary search.
#include<iostream>
using namespace std;

int peak_index(int arr[],int n)
{
    int start =0,end=n-1,mid;
    while(start<=end)
    {
        
        mid=start+(end-start)/2;
        //peak element
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1] )
        return mid;
        //right side
        else if(arr[mid]<arr[mid+1])
        start=mid+1;
        //left side
        else
        end=mid-1;
    }
    
}

int main()
{
    //input a sorted array first increasing than decreasing
    int n;
    cout<<"Enter the number of element in an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for (int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Peak index is: "<<peak_index(arr,n);
}