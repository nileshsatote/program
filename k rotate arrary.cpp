
#include <iostream>
using namespace std;

void krotated(int arr[], int arr2[], int n, int k, int m)
{
    // in condision k is grater then n
    // k = k % n;
    int j = 0;
    // inserting last k element in new array
    for (int i = n - k; i < n; i++)
    {
        arr[j++] = arr[i];
    }
    for (int i = 0; i <= k; i++)
    {
        arr[j++] = arr[i];
    }

    // for printing array

    for (int i = 0; i < n; i++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Enter a size of array=";
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter K =";
    int k;
    cin >> k;
    cout << "Enter a size of empty array=";
    int m;
    cin >> m;
    int arr2[m];

    krotated(arr, arr2, n, k, m);
    return 0;
}