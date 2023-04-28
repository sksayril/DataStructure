#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **mat1, **mat2, **sum;
    int i, j;

    // Allocate memory for matrices
    mat1 = (int **)malloc(3 * sizeof(int *));
    mat2 = (int **)malloc(3 * sizeof(int *));
    sum = (int **)malloc(3 * sizeof(int *));
    for (i = 0; i < 3; i++)
    {
        mat1[i] = (int *)malloc(3 * sizeof(int));
        mat2[i] = (int *)malloc(3 * sizeof(int));
        sum[i] = (int *)malloc(3 * sizeof(int));
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Perform addition of two matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Print the sum matrix
    printf("Sum of the matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Free memory allocated for matrices
    for (i = 0; i < 3; i++)
    {
        free(mat1[i]);
        free(mat2[i]);
        free(sum[i]);
    }
    free(mat1);
    free(mat2);
    free(sum);

    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], sum[3][3], i, j;
    printf("Enter First elements");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Second Elements ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}