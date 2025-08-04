#include<stdio.h>
int main()
{
   char X;
   scanf(" %c",&X);
   if(X>='A' && X<='Z')
   {
       X = X + 32;
       printf("ALPHA\n");
       printf("IS CAPITAL\n");
   }
    else if(X>='a' && X<='z')
    {
         X = X - 32;
         printf("ALPHA\n");
         printf("IS SMALL\n");
    }
    else if(X>='0' && X<='9')
    {
        printf("IS DIGIT\n");
    }
    
    return 0;
}