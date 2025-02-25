#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[3] = {"Apple", "Cat", "Banana"};
    string max = str[0], min = str[0];
    string max2 = str[0];
    int index;
    //cout << str[0][3];

    for(int i=0; i<3; i++)
    {
        if(str[i]>max)
        {
            max = str[i];
            index = i;
        }
        if(str[i]<min)
        {
            min = str[i];
        }
    }
    cout << max << " " << min << endl;
    
    for(int i=0; i<2; i++)
    {
        if(str[i]>max2 && i!=index)
        {
            max2 = str[i];
        }
        if(str[i][1]<str[i+1][1])
        {
            min = str[i];
        }
    }
    
    return 0;
}
