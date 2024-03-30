#include<iostream>
using namespace std;
int main()
{
    //sorting in increasing order
    
    int arr[1000];
    int n;
    cout<<"Enter length of an array:";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i]; 

    for(int i=0;i<n-1;i++)
    {
        int index=i;   
        for(int j=i+1;j<n;j++)
        {
            //for decreasing just change th sign.
            if(arr[index]>arr[j])
            {
              index=j;
            }
        }
        swap(arr[index],arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}