#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};
int isfull(struct queue *q)
{
    if (q->rear == q->size - 1)
        return 1;
    else
        return 0;
}
void enqueue(struct queue *q, int val)
{
    if (isfull(q))
    {
        printf("Overflow\n");
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = val;
        printf("Insertion done sucessfully\n");
        printf("value of rear is:- %d\n", q->rear);
    }
}
int isempty(struct queue *q)
{
    if (q->rear == -1 || q->front > q->rear)
        return 1;
    else
        return 0;
}
int delqueue(struct queue *q)
{
    if (isempty(q))
    {
        printf("underflow\n");
    }
    else
    {
        q->front++;
        int value = q->arr[q->front];
        printf("Deleted element is :-  %d\n", value);
        printf("value of front is:- %d\n", q->front);
    }
};

void main()
{
    int value;
    struct queue *q;
    q->size = 10;
    q->front = q->rear = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    printf("Queue generated sucessfully\n");
    printf("Enter value you want to add in queue\n");
    scanf("%d", &value);
    enqueue(q, value);
    printf("Enter value you want to add in queue\n");
    scanf("%d", &value);
    enqueue(q, value);
    printf("Enter value you want to add in queue\n");
    scanf("%d", &value);
    enqueue(q, value);
    printf("Delete operation in queue \n");
    delqueue(q);
    printf("Delete operation in queue \n");
    delqueue(q);
    printf("Delete operation in queue \n");
    delqueue(q);
    delqueue(q);
}