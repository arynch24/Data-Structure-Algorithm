// pair with given difference
// similar to two sum

// geek for geeks


#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {5, 10, 3, 2, 50, 80};
    int size = v.size();
    int diff_target=78;

    sort(v.begin(), v.end());
    int start = 0, end = 1;
    // we must ensure that on inc/dec the value of start and end , our diff value must also inc/dec
    // we should place our pointer in such a way that our diff value must either inc or dec.
    while (end < size)
    {

        int diff = abs(v[start] - v[end]);
        if (diff == diff_target)
        {
            cout << 1;
            return 0;
        }
        else if (diff < diff_target) // so we need to increase the second pointer.
            end++;
        else // so we need to increase the first pointer.
            start++;

        // last test case
        if (start == end)
            end++;
    }
    cout<<-1;
}
