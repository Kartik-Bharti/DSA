#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int rear;
    int front;
    int *arr;
};

int isfull(struct queue *q)
{
    if (q->front == (q->rear + 1) % q->size)
        return 1;
    else
        return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isfull(q))
    {
        printf("queue is overflow\n");
    }
    else
    {
        q->arr[q->rear] = val;
        q->rear = (q->rear + 1) % q->size;
        printf("value inserted sucessfully\n");
    }
}

int isempty(struct queue *q)
{
    if (q->front == -1)
        return 1;
    else
        return 0;
}

void dequeue(struct queue *q)
{
    if (isempty(q))
    {
        printf("queue is underflow\n");
    }
    else
    {
        int val = q->arr[q->front];
        q->front = (q->front + 1) % q->size;
        printf("deletion done\n");
        printf("value is :-  %d\n", val);
    }
}

int main()
{
    int val;
    struct queue *q;
    q->size = 10;
    q->front = q->rear = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    printf("Queue generated sucessfully🤩\n");
    printf("enter value you want to insert in queue\n");
    scanf("%d", &val);
    q->front = q->rear = 0;
    enqueue(q, val);
    dequeue(q);
    return 0;
}