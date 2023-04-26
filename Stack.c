#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
        return 0;
}

int isfull(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
        return 0;
}

void push(struct Stack *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("Stack overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        printf("element sucessfully pushed\n");
        printf("value of top element is = %d\n", ptr->arr[ptr->top]);
    }
}

void pop(struct Stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack underflow\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("Value poped sucessfully");
        printf("value after poping is = %d\n", val);
    }
}

int main()
{
    // struct Stack s;
    // s.size=10;
    // s.top=-1;
    // s.arr=(int *)malloc(s.size*sizeof(int));
    int val, condition;
    struct Stack *s;
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Stack has created sucessfully\n");

    // check stack is empty or not
    if (isempty(s))
    {
        printf("Stack is empty\n");
    }
    else
        printf("Stack is not empty\n");

    printf("enter element you want to store in stack\n");
    scanf("%d", &val);
    push(s, val);
    printf("enter 1 if you want ot perform pop operation\n");
    scanf("%d", &condition);
    switch (condition)
    {
    case (1):
        pop(s);
        break;

    default:
        printf("you enter something else\n");
    }
    return 0;
}