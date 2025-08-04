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
    int sum = 0; // Initialize sum to 0
    for(int i = 0; i < n; i++)
    {
        sum += ar[i]; // Add each element to sum
    }
    printf("%d", sum); // Output the sum of the array elements
    return 0;
}