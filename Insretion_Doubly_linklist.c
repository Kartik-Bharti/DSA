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
    while (sk!=NULL)
    {
        printf("Element:   %d\n",sk->data);
        sk=sk->next;
    }
}
struct node *insertionatbegining(struct node *head,int val)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    ptr->next=head;
    p->previous=ptr;
    ptr->previous=NULL;
    ptr->data=val; 
    head=ptr;  
    return head; 
}

struct node *insertioninbetween(struct node *head,int index,int val)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;    
    while(i!=index)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next->previous=ptr;
    p->next=ptr;
    ptr->previous=p;
    ptr->data=val;
}

struct node insertatlast(struct node *head,int val)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    ptr->previous=p;
    ptr->data=val;
}
int main()
{
    struct node *head;    
    struct node *second;    
    struct node *third;    
    struct node *fourth;  
    head=(struct node *)malloc(sizeof(struct node));  
    second=(struct node *)malloc(sizeof(struct node));  
    third=(struct node *)malloc(sizeof(struct node));  
    fourth=(struct node *)malloc(sizeof(struct node)); 

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

    // terminating fourth  
    fourth->data=2005;
    fourth->previous=third;
    fourth->next=NULL;

    printf("Insertion done\n"); 
    linklisttraversal(head);

    head=insertionatbegining(head,7);
    printf("****************************\n");
    printf("Insertin done at begining\n"); 
    linklisttraversal(head);
    
    insertioninbetween(head,1,11);
    printf("****************************\n");
    printf("Insertin done in between\n"); 
    linklisttraversal(head);

    insertatlast(head,3);
    printf("****************************\n");
    printf("Insertin done at last\n"); 
    linklisttraversal(head);
    return 0;
}