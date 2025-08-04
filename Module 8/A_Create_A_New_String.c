#include<stdio.h>
#include<string.h>
int main()
{
   char s[1001], t[1001];
   scanf("%s %s", &s, &t);
   int lentS = strlen(s);
   int lentT = strlen(t);
   printf("%d %d\n", lentS, lentT);
   printf("%s %s\n", s, t);
    return 0;
}