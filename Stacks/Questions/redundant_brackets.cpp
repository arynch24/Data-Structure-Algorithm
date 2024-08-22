#include <bits/stdc++.h>
using namespace std;

bool findRedundantBrackets(string &s) {

  stack<char> st;

  int i = 0;
  while (i < s.size()) {

    if (s[i] == '(') {
      st.push(s[i]);
      i++;
    }
    else if (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/') {
      if (!st.empty()) {
        while (s[i] != ')')
          i++;

        st.pop();
      }
    }
    else i++;
  }

  if (st.empty())
    return false;

  return true;
}

int main()
{
    
}