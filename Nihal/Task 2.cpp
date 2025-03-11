#include <bits/stdc++.h>
using namespace std;
int main()
{

    float arr[] = {3.14, 2.71, 1.41, 4.67, 2.98};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
