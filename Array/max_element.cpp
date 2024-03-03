#include<iostream>
using namespace std;
int main()
{
    int arr[10]={100,2,3,4,3,6,33};
    int  min=arr[0] ;
    for(int i=0;i<7;i++)
    {
        if(min>arr[i])
        {min=arr[i];}
    }
    cout<<min;
    return 0;
}