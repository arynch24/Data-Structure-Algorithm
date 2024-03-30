#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter length of array:";
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=n-2;i>=0;i--)
    {
        bool swapped=0;
        for (int j=0;j<=i;j++)
        {
            //for decreasing just change the sign.
            if(arr[j]>arr[j+1])
            {
                swapped=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==0)
        break;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}