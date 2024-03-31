#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={2,6,4,3,8,5,1};
    int ans=INT_MIN;
    for(int i=0;i<=6;i++)
    {    
        if(ans<arr[i])
        ans=arr[i];
    }
    int second_max=INT_MIN;
    for(int i=0;i<=6;i++)
    {
        if( arr[i]!=ans)
        {
           if(second_max<arr[i])
           second_max=arr[i];
        }
    }

    cout<<second_max<<endl;

    
}