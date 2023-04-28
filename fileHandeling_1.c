#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    FILE *fp;
    fp = fopen("testingfile.txt", "w");
    if (fp == NULL)
    {
        printf("\n Cannot Open File");
    }
    printf("\n Enter Number");
    scanf("%d", &n);
    printf("%d", n);
    fprintf(fp, "%d", n);
    fclose(fp);
}