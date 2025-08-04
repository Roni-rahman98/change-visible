#include<stdio.h>
int main()
{
//    char a[5] = {'K', 'h', 'a', 'i', 'r', 'u', 'l'};
        char a[8] = "Khairul";
        int sz= sizeof(a)/sizeof(char);
        printf("%d\n", sz);
        printf("%s", a);
    return 0;
}