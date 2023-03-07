#include<stdio.h>
#include<ctype.h>
void lower(char a[])
{
    int  i = 0;
    while(a[i] != '\0')
    {
        a[i] = tolower(a[i]);
        i++;
    }
}
int main()
{
    char a[] = "ANIRUDDHA";
    lower(a);
    printf("%s",a);
    return 0;
}
