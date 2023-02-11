#include<iostream>
using namespace std;

// Find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element). 

// Examples : 

// Input : A[]={3, 3, 4, 2, 4, 4, 2, 4, 4}
// Output : 4
int  mejority(int arr[],int n)
{
     int c= n/2;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>c)
        {  
            cout<<arr[i];
             break;
        }
       

    }
    return -1 ;
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
  
  cout<<mejority(arr,n);

    
    return 0;
}