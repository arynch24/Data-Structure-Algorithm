//similar to book allocation
//imp. question
//catch the pattern carefully
//time complexity O(N(log N))

//geeks for geeks the painters partition problem 2

//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long start=0,end=0,mid;
        long long ans;
        for (int i=0;i<n;i++)
        {
            if(start<arr[i])
            start=arr[i];
            
            end+=arr[i];
        }
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int count=1;//count number of painters
            int time_=0;//count total time allocated to each painter
            for(int i=0;i<n;i++)
            {
                time_+=arr[i];
                if(time_>mid)
                {
                    count++;
                    time_=arr[i];
                }
            }
            
            if(count<=k)
            {
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
