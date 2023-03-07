#include<stdio.h>
void rev(char a[])
{
    int size = 0,i = 0;
    while(a[i] != '\0')
        size++,i++;
    for(int j = size; j>=0; j--)
     printf("%c",a[j]);
}
int main()
{
    char a[] = "india";
    rev(a);
    return 0;
}
