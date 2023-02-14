#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;

}*last;
void display(struct node *head)
{
    while(head!=NULL)
    {
    printf("%d\n",head->data);
    head=head->next;
    }

}
struct node *reverse(struct node *head)
{
    struct node *p=head;

    while(p->next!=NULL)
    {
       p=p->next;
    }
   while(p!=NULL)
   {
       printf("%d\n",p->data);
       p=p->prev;
   }

}

int main()
{
    struct node *head;
    struct node *last;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    last=(struct node *)malloc(sizeof(struct node));
    head->data=6;
    head->next=second;
    head->prev=NULL;
    second->data=7;
    second->next=third;
    second->prev=head;
    third->data=3;
    third->next=fourth;
    third->prev=second;
    fourth->data=9;
    fourth->prev=third;
    fourth->next=NULL;
    reverse(head);
}

