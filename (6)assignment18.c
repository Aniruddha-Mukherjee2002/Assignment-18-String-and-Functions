#include<stdio.h>
int  check(char a[])
{
    int f1 = 0,f2 = 0,i = 0;
    while(a[i] != '\0')
    {
        if(a[i]>='a'&&a[i]<='z' || a[i] >= 'A' && a[i]<='Z')
            f1 = 1;
        else if(a[i]>='0' && a[i]<='9')
        f2 = 1;

        i++;
    }
    if(f1==1&&f2==1)
        return 1;
    else
        return 0;
}
int main()
{
    char a[] = "aniruddhamukherjee2020@gmail.com";
    int res = check(a);
    if(res)
        printf("It is an alpha-numeric string.");
    else
        printf("It is not an alpha-numeric string.");
    return 0;
}
