#include<iostream>
using namespace std;

void mergSort(int arr1[] ,int n ,int arr2[] , int m , int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j]) 
        {
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }

        while (i<n)
        {
           arr3[k++]=arr1[i++];
        }

        while (j<m)
        {
            arr3[k++]=arr2[j++];
        }
        
        
    }
}

void print(int ans[], int n )
{
    for (int i=0 ; i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}

int main()
{
    int arr1[5]={1,3,4,6,5};
    int arr2[4]={4,7, 8, 9};
    int arr3[9]={0};
    mergSort( arr1,5 , arr2,4 ,arr3);
    print(arr3,9);
    return 0;
}