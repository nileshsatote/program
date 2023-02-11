// find first and last accourance in sorted array

// we cam also find a total number of occurance 
#include <iostream>
using namespace std;

int FristOcc(int arr[],int n , int key)
{
    int s=0;
    int e= n-1;
    int ans = -1;
     while(s<=e)
     {
    int mid = s + (e-s)/2;
        if(arr[mid]==key)
        {
            ans =mid;
            e =mid-1;

        }
        else if(key> arr[mid])
        {
            s= mid+1;
        }
        else{
            e=mid-1;
        }

     }
    //  mid = s + (e-s)/2;
      return ans;
}


int LastOcc(int arr[],int n , int key)
{
    int s=0;
    int e= n-1;
    int ans = -1;
     while(s<=e)
     {
    int mid = s + (e-s)/2;
        if(arr[mid]==key)
        {
            ans =mid;
            s =mid+1;

        }
        else if(key> arr[mid])
        {
            s= mid+1;
        }
        else{
            e=mid-1;
        }

    //  mid = s + (e-s)/2;
     }
      return ans;
}

int main ()
{
    // int n;
    // cout<<"enter a size of an Array = ";
    // cin>>n;
    // int arr[n];
    // for(int i=0 ;i<n; i++)
    // {
    //     cin>>arr[i];
    // }

    int arr [] ={1,2,2,3,3,3,4,4};
    int n= sizeof(arr)/ sizeof(int);
    int key;
    cout<<"Enter a Key = ";
    cin>>key;
    
    cout<<" Frist Occurance is at index " << FristOcc(arr,n, key)<<endl;
    cout<<" Last Occurance is at index "<< LastOcc(arr,n, key)<<endl;

    int total1=FristOcc(arr , n , key);
   int total2= LastOcc(arr , n, key);
    int total = (total2-total1)+1;
    cout<<"total Number of Occruance is " <<total;

return 0;
}