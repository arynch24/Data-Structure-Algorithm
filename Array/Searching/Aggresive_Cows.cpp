//here we are applying binary search in our answer..
//geeks for geeks - aggressive cows 
//hard interview question
//little similar concepts 
//look at the pattern

#include <iostream>
using namespace std;

int max_dist(int stall[], int n, int k)
{
    int start = stall[0], end = stall[n - 1] - stall[0];
    int mid, ans = 0;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int cow_count = 1;//pehele cow ko stall pe bandha jarha hai.
        int position = stall[0];//pehele stall pe pehela cow hai
        for (int i = 1; i < n; i++)
        {

            if (position + mid <= stall[i])//agar hamara jo bhi mid =max possible dist.between every two cows hai
            // jis position pe khade usme ans dist add karne pe agar agle stall se kam ayega tbhi toooo......
            {
                cow_count++;//agle cow ko given stall pe assign karenge
                position = stall[i];//iss position pe anyatha nhi karenge aur aage padhenge
            }
        }

        if (cow_count >= k)//agar cows jyada ho rhi hai to hame distance badhana hoga
        {//isiliye hame right side jana hoga
            ans = mid;//yaha answer store karlenge
            start = mid + 1;
        }
        else//count<k -->> mtlb hamare cow matlb sare cows ka stalls assign nhi hue hai .
        //to hame distance decrease karna hoga to left jana padega
            end = mid - 1;
    }
    return ans;
}

int main()
{
    int stall[] = {1, 2, 4, 8, 9};
    int k = 3;
    int n = 5;
    cout << max_dist(stall, n, k);
}