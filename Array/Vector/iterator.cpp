#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 6, 8, 10, 11}; // here end is at 4 th index.
    // auto defines the datatype automatically
    // begin() defines the starting positon of the array
    // end() is from the [ ending postion+1 ]  OK! Little different
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;

    // v.rbegin()  --> start from reverse position means last here 3 rd index
    // v.rend()  -->> dictates [first position -1 ]  , here -1 positon.
    for (auto it = v.rbegin(); it != v.rend(); it++)
        cout << *it << " ";
    cout << endl;

    // size and capacity
    cout << v.size() << "\n";
    cout << v.capacity();//as length is already defined
}