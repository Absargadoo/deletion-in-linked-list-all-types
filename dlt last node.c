#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
void createlinkedlist(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("element:%d\n", ptr->data);
        ptr=ptr->next;
    }
}
//deletion of last node
struct Node *  deletelastnode(struct Node *head)
{
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next !=NULL)
    {
       p=p->next;
       q=q->next; 
    }
   p->next=q->next;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=12;
    third->next= fourth;

    fourth->data=13;
    fourth->next=NULL;
    printf("linkedlist before deletion:\n");
    createlinkedlist(head);
    head=deletelastnode(head);
    printf("linkedlist after deletion:\n");
    createlinkedlist(head);
    
    return 0;
}