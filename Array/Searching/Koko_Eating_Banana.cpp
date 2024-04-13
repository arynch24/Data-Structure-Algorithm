// leetcode 875
// applying binary search in answers.
//to find minimum speed of eating banana by koko in the given time

#include <iostream>
using namespace std;

int min_speed(int arr[], int n, int hour)
{

    int start = 0, end = 0, mid, ans;
    for (int i = 0; i < n; i++)
    {
        start += arr[i];
        end = max(start, arr[i]);
    }
    start /= hour;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        // mid amount of bananas to consume in one hour
        int total_time = 0;//time taken to eat all bananas on the given mid which is our answer
        for (int i = 0; i < n; i++)
        {
            total_time += arr[i] / mid;
            if (arr[i] % mid)//condition for floating answers to take max hour 
            //for ex 3/2=1 but it should be 2 hours
                total_time++;
        }

        if (total_time > hour)//if total time is greater than given hour it means we have to increase our speed 
        //to eat bananas so we will go right 
        {
            start = mid + 1;
        }
        else//we will find the minimum speed possible to go left 

        //note 
        //whenever we have to find minimum in ans we have to save our answer from left search 
        //if maximum than right search

        {
            ans = mid;//here minimum
            end = mid - 1;//left search
        }
    }
    return ans;
}

int main()
{
    int n = 4;
    int arr[n] = {3, 6, 7, 11};//this contains number of bananas in every gucha or pile.
    int given_time = 8;//time to finish eating all bananas
    cout << min_speed(arr, n, given_time);
}