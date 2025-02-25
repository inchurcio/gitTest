#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    int max = A[0];
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }
    for(int i=0; i<n; i++)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
    }
    cout << max << endl;

    int a = 10, b = 20, c;
    c = a;
    a = b;
    b = c;

    cout << a << " " << b;

    char ch[n];
    char max = ch[0];
    char min = ch[0];
    

    for(int i=0; i<n; i++)
    {
        cin >> ch[i];
    }
    for(int i=0; i<n; i++)
    {
        int ascii = ch[i];
        if(ascii > max)
        {
            max = ch[i];
        }
        if(ascii < min)
        {
            min = ch[i];
        }
    }
    cout << max << min;


    return 0;
}