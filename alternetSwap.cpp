// input=
// 1,2,3,4,5,6
// output=2,1,4,3,6,5
// algo
// input an array
// runing a for loop i=0 to i<n 
// and increse an i to i+=2
// swap(,)



#include<iostream>
using namespace std;

void swapalternet(int arr[] , int size)
{
    for(int i=0; i<size ; i+=2)
    {

        if(i+1<size)
        {
        swap(arr[i+1],arr[i]);
        }
    }
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0 ;i<size;i++)
    {
        cin>>arr[i];
    }

   swapalternet(arr,size);
    cout<<"After swaping"<<endl;
    for(int i=0 ;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
