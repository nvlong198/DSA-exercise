#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{
    if (high >= low)
    {
        int mid = low + (high - low)/2;
        if (x == arr[mid])
            return mid;
        if (x > arr[mid])
            return binarySearch(arr, (mid + 1), high, x);
        else
            return binarySearch(arr, low, (mid -1), x);
    }
    return -1;
}

int countPairsWithDiffK(int arr[], int n, int k)
{
    int count = 0, i;
    sort(arr, arr+n);

    for (i = 0; i < n-1; i++)
        if (binarySearch(arr, i+1, n-1, arr[i] + k) != -1)
            count++;

    return count;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    cout << countPairsWithDiffK(arr, n, k);
    return 0;
}
