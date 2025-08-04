#include<stdio.h>

int main()
{
    int taka;
    scanf("%d", &taka);
    if(taka >= 100)
    {
        printf("kicu 2ta khabo");
    }
    else if(taka >= 50)
    {
        printf("kicu 1ta khabo");
    }
    else{
        printf("kicu khabo na");
    }
    return 0;
}