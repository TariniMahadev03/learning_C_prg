#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int (*ptr)[n] = &arr;

    printf("Enter the array elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (*ptr + i));
    }

    printf("Array elements:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(*ptr + i));
    }

    return 0;
}