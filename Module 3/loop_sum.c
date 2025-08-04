#include<stdio.h>
int main()
{
    int sum = 0;
    int i;
    int n;
    scanf("%d", &n);
    for(i=1; i <=n; i++)
    {
        sum += i;
    }
    printf("Sum of first 5 numbers is %d\n", sum);
    return 0;
}