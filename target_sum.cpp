// find the total numm.of pairs in the array whose sumis equal to the givenvalue x



#include<iostream>
using namespace std;

void pairs(int arr[],int n,int x)
{
    // int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++) 
        {
          for(int k=j+1;k<n;k++)
          {
             if(arr[i] + arr[j] + arr[k]==x)
              {
                  cout<<arr[i]<<arr[j]<<arr[k]<<endl;
              }
          }
        }
    }
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
    cout<<"Enter the value of X =";
     int x;
     cin>>x;

    pairs(arr,n,x);
    return 0;
}