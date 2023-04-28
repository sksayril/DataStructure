// Assending Short
#include <stdio.h>
void main()
{
    int a[6] = {21, 12, 13, 14, 15, 18};
    int temp, i, j;
    printf("Before Sorting\n ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter Sorting\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
}

// Decensing Short
#include <stdio.h>
void main()
{
    int a[6] = {15, 12, 11, 23, 45, 8};
    int temp, i, j;
    printf("Before Shorting In Desending Order\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter Shorting In Decending Order\n");

    for (i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
}