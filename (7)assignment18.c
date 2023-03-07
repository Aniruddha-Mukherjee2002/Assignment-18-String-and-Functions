#include<stdio.h>
#include<string.h>
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
    char a[] = {"madam"};
    int size = sizeof(a) / sizeof(char);
    char b[size];
    strcpy(b,a);
    strrev(a);
    int res = strcmp(a,b);
    if(res == 0)
        printf("%s  is a palindrome string.",a);
    else
        printf("%s is not a palindrome string. ",a);
    return 0;

}
