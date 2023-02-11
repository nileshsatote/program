#include<iostream>
using namespace std;
 
void pairs(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int x=arr[i];
        for(int j=i+1;j<n;j++)
    {
        int y=arr[j];
        cout<<x<<","<<y<<endl;
    }
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
   int arr[n];
   for (int i=0; i<n; i++)
   {
    cin>>arr[i];
   }
    pairs(arr,n);

    return 0;
}