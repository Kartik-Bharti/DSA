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

struct node *insertatbegining(struct node *head,int val)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=val;
    return ptr;
};

struct node *insertinbetween(struct node *head,int val,int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=val;   
}

struct node *insertatlast(struct node *head,int val)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    ptr->data=val;
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
    third->data=2030;
    third->next=NULL;
    printf("Insertion done\n"); 
    linklisttraversal(head);

    head=insertatbegining(head,2005);
    printf("Insertion at begining is done\n");
    linklisttraversal(head);

    insertinbetween(head,34,2);
    printf("Insertion in between is done\n");
    linklisttraversal(head);

    insertatlast(head,22);
    printf("Insertion in last is done\n");
    linklisttraversal(head);
    return 0;
}