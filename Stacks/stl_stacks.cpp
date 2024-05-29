#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;//creation

    //push
    s.push(2);
    s.push(3);

    //pop
    s.pop();

    cout << "Top ELement: " << s.top() << endl;

    //bool empty
    if(s.empty())
    cout<<"Not Empty";
    else
    cout<<"Empty";

    return 0;
}