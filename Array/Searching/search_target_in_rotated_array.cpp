
//to find the target value in sorted array and return its index.

//in this case we will be taking array which after rotating an sorted array will be like inc inc

//target =1
//ex - {4,6,7,0,1,2}
#include<iostream>
using namespace std;

int target_index(int arr[],int n,int target)
{
    int start=0,end=n-1,mid;
    int ans=-1;//when target value is not found.
    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(arr[mid]==target)
        return mid;
    
        else if(arr[mid]>=arr[0] )//mtlb left side sorted hoga
        {
            if(arr[mid]>=target && arr[0]<=target)//true than search left side init
            end=mid-1;
            else//right sie search karo
            start=mid+1;
        }
      
        else//yah pe right side sorted hoga
        {
            if(arr[mid]<=target && arr[end]>=target)//right side me dhundo
            start=mid+1;
            else//left side me dekho
            end=mid-1;
        }
        
    }
    return ans;
}
int main()
{
    //input a sorted array increasing and than inc 
    
    int n,target;
    cout<<"Enter the number of element in an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for (int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Eneter target value: ";
    cin>>target;

    cout<<"Index of target value in the array is: "<<target_index(arr,n,target);
}