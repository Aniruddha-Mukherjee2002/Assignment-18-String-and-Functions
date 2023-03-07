#include<stdio.h>
int  compare(char a[],char b[])
{
    int i = 0,j = 0,f=0;
    while(a[i] != '\0' || a[i] != '\0')
    {
        if(a[i] != b[i])
           {
              f = 1;
              break;
           }
            i++;
    }

     if(f==1)
        return -1;
    else
        return 0;
}
int main()
{
    char a[] = "aniruddha";
    char b[] = "aniruddha";
    int res = compare(a,b);
    if(res == -1)
        printf("Not matched");
    else
        printf("Matched");
    return 0;
}
