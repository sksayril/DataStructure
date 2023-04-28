#include <stdio.h>

#define n 5

int s[5];
int top = -1;

void push(int data)
{
    if (top == n - 1)
    {
        printf("\nstack Is overflow");
        return;
    }
    top++;
    s[top] = data;
}

int pop()
{
    int data;
    if (top == -1)
    {
        printf("\nstack is UnderFlow");
        return 0;
    }
    data = s[top];
    top--;
    return data;
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("\nstack Is empty");
        return;
    }
    printf("\n The Stack is \n");
    for (i = top; i >= 0; i--)
    {
        printf("\n%d", s[i]);
    }
}

void main()
{
    int ch = 0, data;
    do
    {
        printf("\n 1.push");
        printf("\n 2.pop");
        printf("\n 3.display");
        printf("\n 4.quit");
        printf("\n Enter Choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Data:");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("\n The Popped Element is %d", data);
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nBye Bye");
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    } while (ch != 4);
}
