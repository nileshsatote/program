#include<iostream>
using namespace std;

int max(int arr[],int n)
{
    int i;
    // int index=0;
   int max=arr[0];
   for( i=0;i<n;i++)
    {
    if(arr[i]>max)
    {
        max=arr[i];
        }
   }
return max;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<max(arr,n);

    return 0;
}
