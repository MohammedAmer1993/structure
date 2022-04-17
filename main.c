/*
data structure
11 apr 2022
last session in c
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int arr[5];
    int index;
}Stack;

void stack_index(Stack *ss)
{
    ss -> index = -1;
}

void push (Stack *ss, int data)
{
    if (ss -> index == 4)
    {
        printf("the stack is full\n");
    }
    else
    {
        ss -> index++;
        ss -> arr[ss -> index] = data;
    }
}

int pop(Stack *ss)
{
    int output;
    if (ss -> index == -1)
    {
        printf("you are at the begginig of the stack\n");
        return 1;
    }
    else
    {
        output = ss -> arr[ss -> index];
        ss -> index--;
        printf("the value is  ");
        return output;
    }

}
int main()
{
    Stack s1;
    stack_index(&s1);
    push(&s1,72);
    push(&s1,32);
    push(&s1,19);
    push(&s1,67);
    push(&s1,80);
    push(&s1,45);
    push(&s1,41);
    printf("%d\n",pop(&s1));
    printf("%d\n",pop(&s1));
    printf("%d\n",pop(&s1));
    printf("%d\n",pop(&s1));
    printf("%d\n",pop(&s1));
    printf("%d\n",pop(&s1));
    printf("%d\n",pop(&s1));
    printf("%d\n",pop(&s1));
    return 0;
}
