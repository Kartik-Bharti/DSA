#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *previous;
};

void linklisttraversal(struct node *sk)
{
    while(sk->next!=NULL)
    {
        printf("Element:   %d\n",sk->data);
        sk=sk->next;
    }
}

struct node *deletionfrombegining(struct node *head)
{
    struct node *ptr=head;
    struct node *p=ptr->next;
    p->previous=NULL;
    free(ptr);
    head=p;
    return head;
}

struct node *deletioninbetween(struct node *head,int index)
{
    struct node *ptr=head;
    struct node *p=ptr->next;
    int i=0;
    while(i!=index)
    {
        ptr=ptr->next;
        p=ptr->next;
        i++;
    }
    ptr->previous->next=p;
    p->previous=ptr->previous;
    free(ptr);
}

struct node *deletionfromlast(struct node *head)
{
    struct node *p=head;
    struct node *ptr=p->next;
    while(ptr!=NULL)
    {
        p=p->next;
        ptr=ptr->next;
    }
    p->next=NULL;
    free(ptr);
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    fifth=(struct node *)malloc(sizeof(struct node));

    // linking first node with second node 
    head->data=2;
    head->previous=NULL;
    head->next=second;

    // linking second node with third node 
    second->data=30;
    second->previous=head;
    second->next=third;

    // linking third node with fourth node 
    third->data=2003;
    third->previous=second;
    third->next=fourth;

    // linking fourth node with fifth node 
    fourth->data=2005;
    fourth->previous=third;
    fourth->next=fifth;

    // terminating the fifth node
    fifth->data=7;
    fifth->previous=fourth;
    fifth->next=NULL;

    printf("Insertion done\n"); 
    linklisttraversal(head);

    printf("*************************************\n");
    printf("Element deleted from begining\n");
    head=deletionfrombegining(head);
    linklisttraversal(head);
    
    printf("*************************************\n");
    printf("deletion from begining\n"); 
    deletioninbetween(head,1);
    linklisttraversal(head);
    
    printf("*************************************\n");
    printf("deletion from last\n");
    deletionfromlast(head); 
    linklisttraversal(head);
    
    return 0;
}