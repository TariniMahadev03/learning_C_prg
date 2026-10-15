#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    printf("\nAfter freeing memory, trying to access the array elements:\n");
for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
