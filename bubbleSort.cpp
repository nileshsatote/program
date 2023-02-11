// algo
// treverse a array to i=0 to i<n-1
// and j=0 to j<n-1
// if(arr[j]>arr[j+1])
// swap(arr[j], arr[j+1])

# include <iostream>
using namespace std;

void BubbleSort(int arr[] , int n)
{
    for(int i=0; i< n-1; i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j] , arr[j+1]);
            }
        }
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
     BubbleSort (arr,n);
     for(int i=0 ;i <n; i++)
     {
        cout<<arr[i]<<" ";
     }
     return 0;

}