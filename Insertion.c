#include <stdio.h>

void display(int arr[], int n)
{ // Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    // insertion
    for (int i = size; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return index;
}
void main()
{
    int arr[100] = {6, 5, 7, 8, 9};
    int size = 5, element = 45, index = 4;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    int a = size += 1;
    display(arr, size);
    printf("%d", a);
}