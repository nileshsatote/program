#include<iostream>
using namespace std;


int Binary_search(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    while(start <= end)
    
    {

        int mid = (start + (end - start/2));
        // int mid= (start+end)/2;
        if(arr [mid] ==key)
        {
            return mid;
        }
        else if (arr [mid] > key)
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        

    }
    return -1;
}

int main()
{
int arr [] = {1,2,3,4,5,6,7,8,9};

int n= sizeof(arr)/ sizeof(int);

int key;
cout<<"enter a key = ";
cin>>key;

int index = Binary_search(arr,n,key);

if(index == -1)
{
    cout<<"Element is not found";
}
else{
    cout<<"Element is found in index =" <<index;
}


    return 0;
}