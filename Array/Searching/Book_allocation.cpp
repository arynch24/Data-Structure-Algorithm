//geeks for geeks -allocate minimum number of pages

#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int m) 
    {
        //m- number of students
        if(m>n)
        return -1;
        int start=0,end=0,mid;
        int ans;
        for(int i=0;i<n;i++)
        {
            start=max(start,arr[i]);
            end+=arr[i];
        }
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int pages=0; //pages=total number of pages aloocated to each student
            int count=1; //number of students to distribute the books
            
            for(int i=0;i<n;i++)
            {
                pages+=arr[i];
                if(pages>mid)//agar pages jyada honge mid se to...
                {
                    count++;//book aagle bache bache ke paas jayega
                    pages=arr[i];//uske pages badhenge fir
                    //aise hi chalta rhega jab tak sari books baat na jaye
                }
            }
            if(count<=m)//ab agar jitne bache given hai usse kam bacho me hamne baat diya to most probably first bache ke 
            //paas jyada books chali gayi hogi mtlb hame left jana padega taki pehele bache ko kam books mil sake.
            {
                ans=mid;//answer mid me store karenge kyunki hame nhi pata wahi answer hai ya hame aur left jana hoga
                end=mid-1;//left jane ke lie
            }
            else//anyatha right jaye
            start=mid+1;
            
        }
        return ans;
    }
};


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

