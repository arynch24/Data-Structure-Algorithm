#include<bits/stdc++.h>
using namespace std;
int main()
{
    //this is not allowed
    //stored in stacks form - ek jagah line se
    //takes less memory
    //It's fast
    //dynamic memory allocation
    int n;
    cin>>n;
    int arr[n];//stack overflow problem.

    //allowed
    //Static memory allocation
    int arr[1000];

    //To avoid stack overflow
    //we can use vectors
    //is stores in heap - random storage
    //takes so much memory
    //its slow

    //allowed

    int vn;
    cin>>vn;
    vector<int> v(n);
}