#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &inputStack, int count, int size)
{
    // base case
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // RECURSIVE CALL
    solve(inputStack, count + 1, size);

    inputStack.push(num);
}

int main()
{
    stack<int> inputStack;
    inputStack.push(21);
    inputStack.push(22);
    inputStack.push(24);
    inputStack.push(25);

    int size;
    int count = 0;

    solve(inputStack, count, size);
}