#include<stdio.h>
#include<ctype.h>
void upper(char a[])
{
    int  i = 0;
    while(a[i] != '\0')
    {
        a[i] = toupper(a[i]);
        i++;
    }
}
int main()
{
    char a[] = "aniruddha";
    upper(a);
    printf("%s",a);
    return 0;
}

