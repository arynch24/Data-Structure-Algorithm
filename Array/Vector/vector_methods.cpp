#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {3, 2, 14, 6, 8, 1, 9};
    // for sorting in asc
    sort(v.begin(), v.end());//time complexity O(n(logn))
    for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
    cout << endl;

    // sort desc
    //sort(v.begin(), v.end(), greater<int>());
    sort(v.rbegin(), v.rend());//other method
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    //iterator only points the value
    //begin(),end()  -->>are iterators only 

    //searching using vectors
    //binary search
    cout<<binary_search(v.begin(),v.end(),1)<<endl;//will return value in 0 and 1 
    //which tell the presence of the value here "1 is value"

    //to print index of searching element
    cout<<find(v.begin(),v.end(),1)-v.begin()<<endl;
    
    //count 
    cout<<count(v.begin(),v.end(),1)<<endl;
    
    //min or max
    cout<<*min_element(v.begin(),v.end())<<endl;

    //lower bound - returns an iterator pointing to the first element in the range 
    //[first,last] which has a value not less than 'x'.
    
    // lower_bound(first_iterator,last_iterator,x)

    //upper bound - returns an iterator pointing to the first element in the range 
    //[first,last] which has a value greator than 'x'.
    
    // upper_bound(first_iterator,last_iterator,x)

}