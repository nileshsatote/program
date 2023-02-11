#include<iostream>
using namespace std;

void Move(int arr[] , int n)
{
      int i=0;
      for (int j=0; j<5;j++)
      {
        if(arr[j]!=0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
      }
}
void print (int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5]={1, 45,3,0,4};
    Move(arr,5);
    print(arr,5);
    return 0;
}