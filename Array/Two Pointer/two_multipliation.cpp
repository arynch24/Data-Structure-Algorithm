// find if multiple of two elements in an array is equal to the target value
// similar to two diff

// geek for geeks

//try to focus on your start and end pointes position ok!

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {3,7,8,11,25};
    int size = v.size();
    int multiple_target=56;

    int start = 0, end = size-1;//here i am placing my end value at last.

    // we must ensure that on inc/dec the value of start and end , our multiple value must also inc/dec
    // we should place our pointer in such a way that our multiple value must either inc or dec.
    while (end < size)
    {

        int multiple = abs(v[start] * v[end]);
        if (multiple == multiple_target)
        {
            cout << 1;
            return 0;
        }
        else if (multiple > multiple_target) // so we need to decrease the second pointer.
            end--;
        else // so we need to increase the first pointer.
            start++;

        // last test case
        if (start == end)
            end++;
    }
    cout<<-1;
}
