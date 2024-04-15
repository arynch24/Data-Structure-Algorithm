//leetcode 167. Two Sum II 
//two find the sum of two numbers in an sorted array equal to the target value.

//brutefore methor -O(n^2)
//binary search - O(nlogn) -try once


//two pointer - O (log n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v={2,7,11,15,27};

    int n=v.size();
    int target=22;

    int start=0,end=n-1;
    bool flag=0;
    while(start<end)
    {
        int sum=v[start]+v[end];
        if(sum==target)
        {flag=1; break;}
        else if(sum>target)//so we need to decrease the pointer of last value
        end--; 
        else//if sum<target than we need to increase the value of sum by increasing pointer of starting value 
        start++;
    }
    if(flag==1)
    cout<<"YES, it's available";
    else
    cout<<"Sorry not available";
}
