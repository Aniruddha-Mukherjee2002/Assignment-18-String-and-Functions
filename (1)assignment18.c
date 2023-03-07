#include<stdio.h>
int lengthStr(char a[])
{
    int count = 0,i = 0;
    while(a[i] != '\0')
    {
        i++,count++;
    }
    return count;
}
int main()
{
    char str[] = "Aniruddha";
    printf("%d",lengthStr(str));
    return 0;
}

