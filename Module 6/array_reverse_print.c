#include<stdio.h>
int main()
{
   int n;
   scanf("%d", &n); // Input the size of the array
    int ar[n]; // Declare an array of size n
   for(int i = 0; i < n; i++)
   {
      scanf("%d", &ar[i]); // Input elements into the array
    }
    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]); // Output elements of the array in reverse order
    }
    return 0;
}