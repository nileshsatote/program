#include<iostream>
using namespace std;

 int binary_s(int arr[] ,int n,int k)
{
    int s=0;
    int e=n-1;

    while(s<=e)
    {
    int mid= s+(e-s)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }    
       else {
        e=mid-1;
       }
       mid=(s+e)/2;
       
    }
      return -1;
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
    int index=binary_s(arr,n,k);
  
if(index == -1)
{
    cout<<"Element is not found";
}
else{
    cout<<"Element is found in index =" <<index;
}


    return 0; 
 
}