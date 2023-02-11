#include<iostream>
#include<algorithm>
using namespace std;

int reverse(int arr[],int n,int k)
{
    for(int i=0;i<n;i+=k)
    {
        if(i+k<n)
        {
            reverse(arr.begin()+i,arr.end()+i+K);
        }
        else{
            reverse(arr.begin()+i,arr.end());
        }
    }
    return 0;
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
    int k;
    cin>>k;
    reverse(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}