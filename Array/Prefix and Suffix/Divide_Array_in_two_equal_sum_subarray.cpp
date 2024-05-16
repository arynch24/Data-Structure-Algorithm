//divide the arrray in two parts such that sum of elements in both array is same if this is true return yes else no;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr_sum += arr[i];
    }
    bool flag = false;
    int prefix = 0;
    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        if (prefix == arr_sum - prefix)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}