#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linklisttraversal(struct node *sk)
{
    while(sk!=NULL)
    {
        printf("Element:   %d\n",sk->data);
        sk=sk->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    // linking First and second node
    head->data=2;
    head->next=second;
    
    // linking second and third node
    second->data=30;
    second->next=third;

    // terminating the third node
    third->data=2039;
    third->next=NULL;
    printf("Insertion done\n"); 
    linklisttraversal(head);
    return 0;
}