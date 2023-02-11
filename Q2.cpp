#include <iostream>
using namespace std;

// Given an array of positive integers. All numbers occur an even number of times except one number which occurs an odd number of times. Find the number in O(n) time & constant space.

// Examples :

// Input : arr = {1, 2, 3, 2, 3, 1, 3}
// Output : 3

// Input : arr = {5, 7, 2, 7, 5, 2, 5}
// Output : 5
int array(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }

        }
            if (count % 2 != 0)
            {
                return arr[i];
            }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<array(arr, n);

    return 0;
}