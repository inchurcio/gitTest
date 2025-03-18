#include <bits/stdc++.h>
using namespace std;
int digit_sum(int x)
{
    int n = x, sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int arr[] = {19, 28, 47, 35, 92};

    for (int i = 0; i < (5 - 1); i++)
    {
        int min_index = i;
        for (int j = i+1; j < 5; j++)
        {
            if(digit_sum(arr[j]) < digit_sum(arr[min_index]))
            {
                min_index = j;
            }
            else if(digit_sum(arr[j]) == digit_sum(arr[min_index]))
            {
                if(arr[j] < arr[min_index])
                {
                    min_index = j;
                }
            }
        }

        if (min_index != i)
        {
            swap(arr[i], arr[min_index]);
        }
    }

    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
