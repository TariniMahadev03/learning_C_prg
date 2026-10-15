#include <stdio.h>
#define N 3

int* spiralPrint(int **matrix)
{
    int i, k = 0;
    int top = 0, bottom = N - 1;
    int left = 0, right = N - 1;

    static int result[N * N];

    while (top <= bottom && left <= right)
    {
        // Left to right
        for (i = left; i <= right; i++)
        {
            result[k++] = matrix[top][i];
        }
        top++;

        // Top to bottom
        for (i = top; i <= bottom; i++)
        {
            result[k++] = matrix[i][right];
        }
        right--;

        // Right to left
        if (top <= bottom)
        {
            for (i = right; i >= left; i--)
            {
                result[k++] = matrix[bottom][i];
            }
            bottom--;
        }

        // Bottom to top
        if (left <= right)
        {
            for (i = bottom; i >= top; i--)
            {
                result[k++] = matrix[i][left];
            }
            left++;
        }
    }

    return result;
}

int main()
{
    int data[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *matrix[N];

    for (int i = 0; i < N; i++)
    {
        matrix[i] = data[i];
    }

    int *result = spiralPrint(matrix);

    printf("Spiral order:\n");

    for (int i = 0; i < N * N; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}