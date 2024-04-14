#include<bits/stdc++.h>
using namespace std;
int main()
{
    //how data is stored in heap
    //how vecor works for push_back() method

    //ex
    vector<int> vec;
    vec.push_back(1);//1 is stored  in array with [size=1, capacity=1] 
    vec.push_back(2);//1,2 is stored  in a new array with [size=2, capacity=2] and old one is deleted
    vec.push_back(3);//1,2,3 is stored  in a new array with [size=3, capacity=4] and old one is deleted
    vec.push_back(4);//1,2,3,4 is stored  in a same array with [size=4, capacity=4] because there is already space.

    //conclusin
    //vector doubles it memory/capacity whenever there is no space for an integer to store
    //due to which its average time complexity is always O(1).
    
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<" ";
    cout<<endl;


    vector<int>v={1,2,3,4,5,6,7,8,9};
    //how to remove value from vector.
    //there will be no change in capacity it will be same.
    //v.pop_back;//to delete from last
    v.erase(v.begin()+2);//to remove of a particular place
    v.clear();//to remove all vslues
    //index 2 integer will be deleted and right elements will be shifted. 

    //front, back ,empty
    cout<<vec.front()<<" ";//to print first element
    cout<<vec.back()<<" ";//to print last element
    cout<<vec.empty()<<" ";//to tell that array is empty or not in bool datatype 0 and 1.

}