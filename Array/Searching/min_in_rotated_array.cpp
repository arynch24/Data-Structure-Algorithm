//binary search can us used in inc inc  and also in dec dec array.
//to find the smallest value in sorted array

//in this case we will be taking array which after rotating an sorted array will be like inc inc

//ex - {4,6,7,0,1,2}
#include<iostream>
using namespace std;

int smallest_value(int arr[],int n)
{
    int start=0,end=n-1,mid;
    int ans=arr[0];//when the array ins not rotated. ok!
    while(start<=end)
    {
        mid=start+(end-start)/2;
        //searching right side 
        if(arr[mid]>=arr[0])
        start=mid+1;
        //searching left side
        else
        {
            ans=arr[mid];
            end=mid-1;
        }
    }
    return ans;
}
int main()
{
    //input a sorted array increasing and than inc 
    
    int n;
    cout<<"Enter the number of element in an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for (int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Smallest value in the array is: "<<smallest_value(arr,n);
}