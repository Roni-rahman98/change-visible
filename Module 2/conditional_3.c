#include<stdio.h>

int main()
{
    int taka;
    scanf("%d", &taka);
    if(taka >= 5000){
        printf("cox bazar jabo\n");
        if(taka >= 10000){
            printf("sentmartin jabo\n");
        }else{
            printf("perot asbo");
        }
    }else{
        printf("kothao jabo na");
    }
    return 0;
}