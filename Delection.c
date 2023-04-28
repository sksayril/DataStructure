#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
void indDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
void main()
{
    int arr[100] = {6, 5, 7, 8, 9};
    int size = 5, element = 45, index = 1;
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
}