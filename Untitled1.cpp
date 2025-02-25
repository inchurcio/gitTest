#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[3] = {"Apple", "Cat", "Banana"};
    string max = str[0], min = str[0];
    //cout << str[0][3];

    for(int i=0; i<3; i++)
    {
        if(str[i]>max)
        {
            max = str[i];
        }
        if(str[i]<min)
        {
            min = str[i];
        }
    }
    cout << max << " " << min;
    return 0;
}
