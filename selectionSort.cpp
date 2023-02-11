// algo
// given arr= 5 1 2 3 4 6
// . treverse an array from i=0 to i<n-1
// . treverse 2nd loop from j= i+1 to j< n
// .  cansider 1st element is min
// .  if (arr[j]<min)
// .  store arr[j] in min
// .  and swap min and ans;



#include <iostream>
using namespace std;


void selectionSort(int arr[] , int n)
{
    for(int i=0 ;i<n-1;i++){
   int minIndex=i;
   for(int j=i+1; j<n ;j++)
   {
    if(arr[j]<arr[minIndex])
    {
        minIndex = j;

    }
   }
     swap(arr[minIndex] , arr[i]);
  

    }
}
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
   int key;
   cin>>key; 
  
     cout<<"after sort"<<endl;

     selectionSort(arr ,n );
     for(int i=0 ;i <n; i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
    //  for kth  minimum element
     int ans = arr[key-1];
     cout<<ans;


    return 0;
}