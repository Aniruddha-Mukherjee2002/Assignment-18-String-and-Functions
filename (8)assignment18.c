#include<stdio.h>
int countword(char a[])
{
   int count = 0,i = 0,k = 0;
   while(a[i] != '\0')
   {
       if(a[i]>='a' &&a[i]<='z' || a[i]>='A'&&a[i]<='Z')
        {
            k = i;
            break;
        }

       i++;
   }

   i = k;

   while(a[k] != '\0')
   {
       if(a[k] == ' ')
        count++;
        k++;
   }
   if(a[k] == '\0')
    count+=1;

   return count;
}
int main()
{
    char a[] = "my name is aniruddha.";
    printf("%d",countword(a));
    return 0;
}
