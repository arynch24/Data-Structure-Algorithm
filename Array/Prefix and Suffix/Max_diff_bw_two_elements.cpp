//but twist is if you are at i th postion than you can subtract it by right side elements only


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
   
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int suffix_max=arr[n-1];
    int diff_max=0;
    //subtract the ith element with the maximum value in right side to get the maximum difference
    for(int i =n-2;i>-1;i--)
    {
        suffix_max=max(suffix_max,arr[i]);//maximum element at right side.
        diff_max=max(diff_max,suffix_max-arr[i]);
    }
    cout<<diff_max;
}
