#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int data)
    {
        value = data;
        next = NULL;
    }
};

int main()
{
    Node *n1 = new Node(111);//dynamic memory allocation - rerun it its address will change
    cout<<n1<<"\n";
    cout<<(*n1).value<<"\n";//to get value using a pointer reference
    
    Node n2(222);//static memory allocation - address will same
    cout<<&n2<<"\n";//this stores address of n2
    cout<<n2.value<<"\n";//to get value using an object
    
    Node n3(333);//static memory alloc
    cout<<&n3<<"\n";
    cout<<n3.value<<"\n";

}