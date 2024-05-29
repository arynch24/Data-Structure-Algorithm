#include <bits/stdc++.h>
using namespace std;

//Odd Queries code forces
//very important prefix suffix question
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        vector<vector<int>> query(q, vector<int>(3));
        for (int i = 0; i < q; i++)
        {
            for (int j = 0; j < 3; j++)
                cin >> query[i][j];
        }

        vector<int> prefix(n + 1, 0);
        vector<int> suffix(n + 1, 0);

        for (int i = 1; i <= n; i++)
            prefix[i] = prefix[i - 1] + v[i - 1];

        //  for(int i=0;i<n+1;i++)
        // {
        //     cout<<prefix[i]<<" ";
        // }
        for (int i = n - 1; i >= 0; i--)
            suffix[i] = suffix[i + 1] + v[i];

        // cout<<endl;
        //         for(int i=0;i<n+1;i++)
        //         {
        //             cout<<suffix[i]<<" ";
        //         }
        //         cout<<endl;
        for (auto qu : query)
        {
            int l = qu[0];
            int r = qu[1];
            int k = qu[2];

            int sum = 0;
            // cout<<prefix[l-1]<<" "<<suffix[r]<<endl;
            sum = prefix[l - 1] + suffix[r] + (r - l + 1) * k;

            if (sum % 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}