#include <bits/stdc++.h>
using namespace std;
int Binary_Search(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {9, 8, 6, 5, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    sort(arr, arr+n);

    int index = Binary_Search(arr, n, target);

    if (index == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << index;
    }
    return 0;
}
