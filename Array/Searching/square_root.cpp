#include <iostream>
using namespace std;

sqrt(int num)
{
    //handling test cases
    if(x<2)
    return x;
    int ans;
    int start = 0, end = num, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        //overflow may happen
        if (mid * mid == num)//mid==num/mid
        {
            ans = mid;
            break;
        }

        // left
        //to tackle overflo in mid*mid you can simply do 
        else if (mid * mid > num)//mid>num/mid
            end = mid - 1;
        else
        {
            // right
            ans = mid; // just less
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << sqrt(num);
}