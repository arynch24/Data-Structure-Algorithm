#include <bits/stdc++.h>
using namespace std;
// //find missing number in array from 1 to n

// my approach

// int main()
// {

// int n=6;
// int arr[n-1]={1,3,4,5,6};
// int flag=0;
// int ans,j;
// for(int i=0;i<n-1;i++)
// {
//     for( j=1;j<=n;j++)
//     {
//         if(arr[i]==j)
//         flag=1;
//     }
//     if (flag==0)
//     {
//         ans=j;
//         break;
//     }
// }

// cout<<ans;
// }

int main()
{
    int n = 6;
    int arr[n - 1] = {1, 3, 4, 5, 6};
    int sum_arr = 0, sum_tot = 0;
    for (int i = 0; i < n - 1; i++)
        sum_arr += arr[i];

    for (int j = 1; j <= n; j++)
        sum_tot += j;

    int ans;
    ans = sum_tot - sum_arr;
    cout << ans;
}