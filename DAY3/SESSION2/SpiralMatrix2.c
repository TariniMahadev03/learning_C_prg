#include <stdio.h>

#define N 3

void generateMatrix(int result[N][N])
{
    int i, k = 1;
    int top = 0, bottom = N - 1;
    int left = 0, right = N - 1;

    while (top <= bottom && left <= right)
    {
        // Left to right
        for (i = left; i <= right; i++)
            result[top][i] = k++;
        top++;

        // Top to bottom
        for (i = top; i <= bottom; i++)
            result[i][right] = k++;
        right--;

        // Right to left
        if (top <= bottom)
        {
            for (i = right; i >= left; i--)
                result[bottom][i] = k++;
            bottom--;
        }

        // Bottom to top
        if (left <= right)
        {
            for (i = bottom; i >= top; i--)
                result[i][left] = k++;
            left++;
        }
    }
}

int main(void)
{
    int result[N][N] = {0};

    generateMatrix(result);

   
    printf("[");
    for (int i = 0; i < N; i++)
    {
        if (i > 0)
            printf(",");

        printf("[");
        for (int j = 0; j < N; j++)
        {
            if (j > 0)
                printf(",");

            printf("%d", result[i][j]);
        }
        printf("]");
    }
    printf("]\n");

    return 0;
}

