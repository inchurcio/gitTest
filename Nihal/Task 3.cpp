#include <bits/stdc++.h>
using namespace std;
int get_size(string x)
{
    int length = 0;
    int i =0;
    while(x[i] != NULL)
    {
        length++;
        i++;
    }
    return length;
}
int main()
{
    string arr[5] = {"apple", "banana", "kiwi", "grape", "orange"};

    for (int i = 1; i < 5; i++)
    {
        string key = arr[i];
        int j = i - 1;
        while (j >= 0 && get_size(arr[j]) > get_size(key))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int k = 0; k < 5; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}
