#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int arr_sum = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

    cout << "prefix sum : ";
    for (int i = 0; i < n; i++)
        cout << prefix[i] << " ";

    cout << endl;

    vector<int> suffix(n);
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i > -1; i--)
        suffix[i] = suffix[i + 1] + arr[i];

    cout << "suffix sum : ";
    for (int i = 0; i < n; i++)
        cout << suffix[i] << " ";
}