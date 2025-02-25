#include<stdio.h>
int main()
{
    int var1, var2;
    scanf("%d %d", &var1, &var2);
    printf("%d %d", var1, var2);

    char ch[5];
    gets(ch);
    puts(ch);

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