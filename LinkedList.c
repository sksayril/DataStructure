#include <stdlib.h>
#include <stdio.h>
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    head = (struct Node *)maloc(sizeof(struct Node));
    second = (struct Node *)maloc(sizeof(struct Node));
    third = (struct Node *)maloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 66;
    third->next = NULL;
    return 0;
}