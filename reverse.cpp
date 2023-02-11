// algo
// int arr 
// int s=0,e=n-1;
// while(s<e)
// swap(arr[s] , arr[e])
// s++;
// e--;
// print revers arr

#include <iostream>
using namespace std;

void  reverse(int arr[], int n,int k)
{
    int s = 0;
    int e = k;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        // e--;

    }
}
int main()
{
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n;i++)
        {
            cin>>arr[i];
        }
        // int m;
        // cin>>m;
//     int arr[] = {1,2,3,4,5};
//     int n= sizeof(arr)/ sizeof(int);

//  for(int i=0 ;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//  cout<<endl;
     cout<<"Enter a key = ";
     int k;
     cin>>k;
    reverse(arr,n,k);

cout<<" Reverse Array is = ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 cout<<endl;


    return 0;
}