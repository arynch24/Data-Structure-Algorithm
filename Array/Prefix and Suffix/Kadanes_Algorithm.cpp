
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
   
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //TC: O(n) using Kadane's Algorithm.
    int maxx = 0;
    int prefix = 0;
    for (int i = 0; i < n; i++)
    {
            prefix += arr[i];
            
            if(prefix<0)
            prefix=0;

            maxx = max(maxx, prefix);
        
    }
    cout<<maxx;
}
