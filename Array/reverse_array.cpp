#include <iostream>
using namespace std;
// int main()
// {
//     int arr[6] = { 6, 11, 7, 4, 8, 9 };
//     int rev_arr[6];

//     for (int i = 0,j=5; i <= 5; i++,j--)
//     {
//         rev_arr[i]=arr[j];
//     }

//     for(int i=0;i<=5;i++)
//     {
//         arr[i]=rev_arr[i];
//         cout<<arr[i]<<" ";
//     }
// }

int main()
{
    int arr[6] = {6, 11, 7, 4, 8, 9};
    int i=0,j=5;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

    for(int i=0;i<=5;i++)
    {
        cout<<arr[i]<<" ";
    }
}