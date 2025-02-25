#include<bits/stdc++.h>
using namespace std;
int main()
{
    int var1, var2;
    cin >> var1 >> var2;
    cout << var1 + " " << endl << var2;

    string str;
    cin >> str;
    cout << str;

    int arr[5];
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<5; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}