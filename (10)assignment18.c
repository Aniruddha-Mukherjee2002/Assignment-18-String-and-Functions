#include<stdio.h>
void check(char a[])
{
    int i = 0,j=0,count;

    while(a[i] != '\0')
    {
        count = 0;
        j = 0;
        while(a[j] != '\0')
        {
            if(a[i] == a[j])
                count++;
                j++;
        }
        printf("%c = %d\n",a[i],count);
        i++;
    }
}
int main()
{
    char a[] = {"aniruddha"};
    check(a);
    return 0;
}
