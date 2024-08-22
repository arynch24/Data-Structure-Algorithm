#include<bits/stdc++.h>
using namespace std;

int main () {
    string str = "Aryan";

    stack<char> s;

    for (int i = 0; i<str.length(); i++) {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while(!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }

    cout << "answer is: "<< ans << endl;
}