#include<iostream>
using namespace std;

void InsertionSort(int arr[] , int n)
{
    for (int i=1;i<n; i++)
    { 
        int j;
        int temp=arr[i];
        for ( j=i-1;j>=0;j--)
        {
               if (arr[j]>temp)
               {
                   arr[j+1]=arr[j];
               }

               else{
                break;
               }
        }
        arr[j+1]=temp;
    }
}


int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<<"after sort"<<endl;
     InsertionSort (arr,n);
     for(int i=0 ;i <n; i++)
     {
        cout<<arr[i]<<" ";
     }
     return 0;

}