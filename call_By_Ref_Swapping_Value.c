// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int num1, num2, temp;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter First Number");
    scanf("%d", &num1);
    printf("Enter Second NUmber");
    scanf("%d", &num2);

    printf("Befor Swapping FirstNum%d Second Num%d\n", *ptr1, *ptr2);
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("\nAfter Swapping Num1:-%d Num2:-%d", *ptr1, *ptr2);

    return 0;
}