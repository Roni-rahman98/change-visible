#include <stdio.h>
int main()
{
    int ar[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i]); // Input elements into the array
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]); // Output elements of the array
    }
    return 0;
}