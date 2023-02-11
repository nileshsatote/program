#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    int d=2;
    int temp[7];
    int j=0;
    for(int i=size-d;i<size;i++)
    {
       temp[j++]=arr[i];
    }
    for(int i=0;i<size;i++)
    {
        temp[j++]=arr[i];
    }

    cout<<"then"<<endl;
    for(int j=0;j<size;j++)
    {
        cout<<temp[j]<<" ";
    }
    return 0;
}