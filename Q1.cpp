#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Given an array A[] of n numbers and another number x, the task is to check whether or not there exist two elements in A[] whose sum is exactly x. 

void Array(int arr[],int n,int x)
{
//     for(int i=0;i<n-1;i++)
//     {
//        for(int j=1;j<n;j++)
//        {
//         if(arr[i]+arr[j]==x)
//         {
//             return true;
//         }
//        }
//     }
  
//   return false;

sort(arr,arr+n);
int i=0;
int j=n-1;
int count=0;

while(i<j)
{
    if(arr[i]+arr[j]==x)
    {
              count++;
              i++;
              j--;
        
    }

    else if(arr[i]+arr[j]<x)
    {
          i++;
    }

     else if(arr[i]+arr[j]>x)
    {
          j--;
    }


    
}
cout<<count;
// return 0;
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
    int x;
    cin>>x;

    Array(arr,n,x);

    return 0;
    
}