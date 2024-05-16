
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
   
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //TC: O(n^2);
    //TC: O(n) using Kadane's Algorithm
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        int prefix = 0;
        for (int j = i; j < n; j++)
        {
            prefix += arr[j];
            maxx = max(maxx, prefix);
        }
    }
    cout<<maxx;
}
