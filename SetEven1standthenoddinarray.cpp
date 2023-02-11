// set even number first in array and then odd
#include <iostream>
#include <vector>
using namespace std;

void set(vector<int> &v)
{
    int leftPointer=0;
    int rightPointer=v.size()-1;
    while(leftPointer<rightPointer)
    {
        if(v[leftPointer]%2==1 && v[rightPointer]%2==0)
        {
            swap(v[leftPointer],v[rightPointer]);
            leftPointer++;
            rightPointer--;
        }

        if(v[leftPointer]%2==0)
        {
            leftPointer++;
        }

        if(v[rightPointer]%2==1){
            rightPointer--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int ele;cin>>ele;
        v.push_back(ele);
    }
    set(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}

// void set(int arr[], int n)
// {
//     int j = 0;
//      int temp[n];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 1)
//         {
//             temp[j++] = arr[i];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 2)
//         {
//             temp[j++] = arr[i];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = temp[j];
//     }
// }
// int main()
// {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int j = 0;
//      int tmep[j];
//     set(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }



