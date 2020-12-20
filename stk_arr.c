#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack_arr[MAX];
int top = -1;
void push(int item);
int pop();
void display();

int main()
{
    int choice, item;
    while (1)
    {
        printf("Choose 1.Push\n 2.Pop\n 3.Display the top elements\n4.Display all elements\n 5.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number to be pushed\n");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            printf("\tPopped Item is %d\n\n", pop());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("Wrong choice\n");
        }
    }
    return 0;
}
void push(int item)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = item;
}
int pop()
{
    int item;
    if (top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    item = stack_arr[top];
    top = top - 1;
    return item;
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("stack is empty");
        exit(1);
    }
    printf("Stack elements is:\n\n");
    for (i = top; i >= 0; i--)
    {
        printf("\t%d\n", stack_arr[i]);
    }
    printf("\n\n");
}
