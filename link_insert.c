#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    while(head!=NULL)
    {
        printf("element:%d\n",head->data);
        head=head->next;
    }
}
struct node *insertatbtw(struct node *head,int data,int index)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
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
    return head;
}
struct node *insertatstart(struct node *head,int data)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct node *insertatend(struct node *head,int data)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    int i=0;
    struct node *p=head;
    ptr->data=data;
    while(p->next!=NULL)
    {
        p=p->next;
        i++;
    }
    p->next=ptr;
        ptr->next=NULL;
    return head;
}
struct node *insertatnode(struct node *head,struct node *prenode,int data)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prenode->next;
    prenode->next=ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    head->data=6;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=2;
    third->next=NULL;
    display(head);
    printf("\n");
    insertatbtw(head,45,2);
    display(head);
    printf("\n");
    head=insertatstart(head,34);
    display(head);
    printf("\n");
    insertatend(head,67);
    display(head);
    printf("\n");
    head=insertatnode(head,second,89);
    display(head);
    return 0;
}