#include<iostream>
using namespace std;


void rotaed(int arr[] , int n.size() , int k)
{
    int temp;
      for(int i=0 ;i<n ;i++)
      {
         temp [(i+k)%n.size()] = arr[i]
      }
      arr[n]=temp;
}

int main()
{
    int n;
    cin>>n;
   int arr[n];
   for(int i=0 ; i<n.size(); i++)
   {
    cin>>arr[i];
   }
   cout<<"enter a Key="<<endl;
   int k;
   cin>>k;
   
   rotaed(arr , n.size() , k);

   for(int i=0 ; i<n.size(); i++)
   {
    cout<<arr[i];
   }

  return 0;

}