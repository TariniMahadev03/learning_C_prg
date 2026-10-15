#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    // malloc
    int *a = malloc(3 * sizeof(int));
    if (a == NULL)
        return 1;

    for (i = 0; i < 3; i++)
        a[i] = (i + 1) ;

    printf("malloc: ");
    for (i = 0; i < 3; i++)
        printf("%d ", a[i]);
    printf("\n");

    // calloc
    int *b = calloc(3, sizeof(int));
    if (b == NULL) {
        free(a);
        return 1;
    }

    printf("calloc: ");
    for (i = 0; i < 3; i++)
        printf("%d ", b[i]);
    printf("\n");

    // realloc
    int *temp = realloc(a, 5 * sizeof(int));
    if (temp == NULL) {
        free(a);
        free(b);
        return 1;
    }

    a = temp;
    a[3] = 4;
    a[4] = 5;

    printf("realloc: ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");

    // free
    free(a);
    free(b);

    a = NULL;
    b = NULL;

    return 0;
}