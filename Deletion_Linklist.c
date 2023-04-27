#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linklisttraversal(struct node *sk)
{
    while (sk != NULL)
    {
        printf("Element:   %d\n", sk->data);
        sk = sk->next;
    }
}
struct node *deleteionatbegining(struct node *head)
{
    struct node *ptr1 = head;
    head = head->next;
    free(ptr1);
    return head;
}
struct node *deletioninbetween(struct node *head, int index)
{
    struct node *ptr1 = head;
    struct node *ptr = ptr1->next;
    int i = 0;
    while (i != index - 1)
    {
        ptr1 = ptr1->next;
        ptr = ptr1->next;
        i++;
    }
    ptr1->next = ptr->next;
    free(ptr);
}

struct node *deletedfromlast(struct node *head)
{
    struct node *ptr1 = head;
    struct node *ptr = ptr1->next;
    while (ptr->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr = ptr->next;
    }
    ptr1->next = NULL;
    free(ptr);
}

struct node *deletedfromvalue(struct node *head, int val)
{
    struct node *ptr1 = head;
    struct node *ptr = ptr1->next;
    while (ptr->data != val)
    {
        ptr1 = ptr1->next;
        ptr = ptr->next;
    }
    if (ptr->data == val)
    {
        ptr1->next = ptr->next;
        free(ptr);
        printf("Element deleted from given value\n");
        linklisttraversal(head);
    }
    else
    {
        printf("##### sorry #####\n");
        printf("Element not found in Queue\n");
    }
}
int main()
{
    int value;
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *sixth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    sixth = (struct node *)malloc(sizeof(struct node));

    // linking First and second node
    head->data = 2;
    head->next = second;

    // linking second and third node
    second->data = 30;
    second->next = third;

    // Linking the third node with fourth node
    third->data = 2003;
    third->next = fourth;

    // linking the fourth node with fifth
    fourth->data = 2005;
    fourth->next = fifth;

    // Linkin the fifth node with sixth
    fifth->data = 32;
    fifth->next = sixth;

    // Terminating sixth node
    sixth->data = 8;
    sixth->next = NULL;

    printf("Linked-list formed\n");
    linklisttraversal(head);

    printf("\nElement deleted from begining of list\n");
    head = deleteionatbegining(head);
    linklisttraversal(head);

    printf("\nElement deleted in between of link list\n");
    deletioninbetween(head, 1);
    linklisttraversal(head);

    printf("\nElement deleted from last\n");
    deletedfromlast(head);
    linklisttraversal(head);

    // Deleting element from specific value
    printf("\nEnter element you want to delete from list\n");
    scanf("%d", &value);
    deletedfromvalue(head, value);
    return 0;
}