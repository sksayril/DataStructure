// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int *ptr1, *ptr2, *ptr3;
    int num1, num2, num3;
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;
    printf("Enter 3 Numbers");
    scanf("%d %d %d", ptr1, ptr2, ptr3);

    if (*ptr1 > *ptr2 && *ptr1 > *ptr3)
    {
        printf("%d This Number Is big", *ptr1);
    }
    if (*ptr2 > *ptr1 && *ptr2 > *ptr3)
    {
        printf("%d This Number Is big", *ptr2);
    }
    if (*ptr3 > *ptr1 && *ptr3 > *ptr2)
    {
        printf("%d This Number Is big", *ptr3);
    }

    return 0;
}