// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int p, r, t, si;
    int *ptr1, *ptr2, *ptr3;
    // si=p*t*r/100
    ptr1 = &p;
    ptr2 = &r;
    ptr3 = &t;
    printf("Enter T Value");
    scanf("%d", &t);
    printf("Enter P Value");
    scanf("%d", &p);
    printf("Enter R Value");
    scanf("%d", &r);
    si = (*ptr1 * *ptr2 * *ptr3) / 100;
    printf("This is Simple Interest%d", si);

    return 0;
}