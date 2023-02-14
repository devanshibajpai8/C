#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void display(struct node *head)
{
    struct node *p=head;
    while(p->next!=head)
    {
    printf("%d\n",p->data);
    p=p->next;
    }
    printf("%d\n",p->data);
}
struct node *insertatbtw(struct node *head,int data,int index)
{
     struct node *ptr=(struct node *)malloc(sizeof(struct node *));
    struct node *p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    ptr->prev=p;
    return head;
}
struct node *insertatstart(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node *));
    struct node *p=head->next;
    ptr->data=data;
    while(p->next!=head)
    {
    p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head->prev=ptr;
    return ptr;
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
    head->data=6;
    head->next=second;
    head->prev=NULL;
    second->data=7;
    second->next=third;
    second->prev=head;
    third->data=3;
    third->next=fourth;
    third->prev=second;
    fourth->data=2;
    fourth->prev=third;
    fourth->next=head;
    display(head);
    printf("\n");
    insertatbtw(head,9,2);
    display(head);
    printf("\n");
    head=insertatstart(head,3);
    display(head);

}
