#include<iostream>
#include<climits>
using namespace std;

int min (int arr[], int n)
{
    int minn =INT_MAX;
    int ans= 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<minn)
        {
            minn=arr[i];
        }
         ans= minn;
        ans = min(ans , minn );
    }
    return ans;
}

int max(int arr[] , int n)
{
   
   int max =  INT_MIN;
    for(int i=0 ;i<n;i++)
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
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    }

//    cout<<"max is="<<max(arr,n)<<endl;
   cout<<"min is="<<min(arr,n);


}