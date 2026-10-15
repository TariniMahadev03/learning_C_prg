#include <stdio.h>
#define n 3

int *rotate(int matrix[n][n])
{
    static int result[n * n];
    int k = 0;

    for (int j = 0; j < n; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            result[k++] = matrix[i][j];
        }
    }

    return result;
}

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *result = rotate(matrix);

    printf("After rotation:\n");

    for (int i = 0; i < n * n; i++)
    {
        printf("%d ", result[i]);

        if ((i + 1) % n == 0)
            printf("\n");
    }

    return 0;
}