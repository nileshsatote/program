#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
  int totalsum=n*(n+1)/2;
    int arr[n];

   for(int i=0;i<n;i++)
   {

   cin>>arr[i];
   }
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
  }
    int missingNum=totalsum-sum;
    cout<<missingNum;

    return 0;
}