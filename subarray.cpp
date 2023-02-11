#include<iostream>
// #include<climits>
using namespace std;

int subarray(int arr[] , int n)
{

      int largest_sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n; j++)
        {
           int sum=0;
            for(int k=i;k<=j;k++)
            {     sum+=arr[k];
            //   cout<<arr[k]<<",";
            }  
            largest_sum = max(largest_sum , sum);    
            //  largest_sum = min(largest_sum , sum); 
         }

        
         
     
    }
    return largest_sum;
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
    
   cout<<subarray(arr,n);
    return 0;
}