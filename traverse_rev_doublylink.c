#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev,*next;
};
struct node *reverse(struct node *head)
{
    struct node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    struct node *r=p;
    while(r!=NULL)
    {
        printf("%d\n",r->data);
        r=r->prev;
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
