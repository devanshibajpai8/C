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
    printf("%d\n",head->data);
    head=head->next;
    }

}
struct node *insertinbtw(int index,struct node *head,int data)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    int i=0;
    struct node *h=head;
    while(i!=index-1)
    {
        h=h->next;
        i++;
    }
    p->data=data;
    p->next=h->next;
    h->next=p;
    return head;
}
struct node *insertatstart(int data,struct node *head)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
   p->data=data;
    p->next=head;
     
    return p;
    
}

void main()
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
    second->data=7;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=2;
    fourth->next=NULL;
    display(head);
    printf("\n");
    insertinbtw(2,head,8);
    display(head);
    printf("\n");
    head=insertatstart(7,head);
    display(head);
    printf("\n");




}
