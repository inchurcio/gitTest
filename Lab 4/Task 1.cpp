#include <bits/stdc++.h>
using namespace std;
int Binary_Search(int target)
{
    int low = 0;
    int high = target;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (mid * mid == target)
        {
            return mid;
        }
        else if (mid * mid < target)
        {
            low = mid + 1;
        }
        else if (mid * mid > target)
        {
            high = mid - 1;
        }
    }
    return high;
}

int main()
{
    int target;
    cout << "Enter target: ";
    cin >> target;

    int root = Binary_Search(target);

    cout << root;
    return 0;
}
