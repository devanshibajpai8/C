#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
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
void empty(struct node *head)
{
    if(head->next=NULL)
    {
        printf("list is empty");
    }
}
struct node *inserbtw(struct node *head,int data,int pos)
{
    struct node *p=head;
    struct node *r=(struct node *)malloc(sizeof(struct node));
    int i=0;
    while(i!=pos-1)
    {
        p=p->next;
        i++;
    }
 r->data=data;
   
    r->next=p->next;
    p->next=r;
    return head;
}
struct node *insertstart(struct node *head,int data)
{
    struct node *p=head;
    struct node *r=(struct node *)malloc(sizeof(struct node));
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=r;
    r->data=data;
    
    r->next=head;
    
    return r;

}
struct node *insertend(struct node *head,int data)
{
    struct node *p=head;
    struct node *r=(struct node *)malloc(sizeof(struct node));
    while(p->next!=head)
    {
        p=p->next;
    }
    r->data=data;
    p->next=r;
    r->next=head;
    return head;

}
void cnt(struct node *head)
{
    struct node *r=head;
    int count=1;
    while(r->next!=head)
    {
        count++;
        r=r->next;
    }
    printf("%d",count);

}
struct node *search(int item,struct node *head)
{
    struct node *p=head;
    int i=0;
    while(p->data!=item)
    {
        p=p->next;
        i++;
    }
    printf("\n%dat pos %d",p->data,i);

}
struct node *delbtw(struct node *head,int pos)
{
    int i=0;
    struct node *p=head;
        struct node *r=head->next;
    
    while(i!=pos-1)
    {
        p=p->next;
        i++;
    }
    r->next=p->next;
    return head;
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
    fourth->next=head;
    display(head);
    printf("\n");
    inserbtw(head,9,2);
    display(head);
    printf("\n");
    head=insertstart(head,4);
    display(head);
    printf("\n");
    insertend(head,8);
    display(head);
    printf("\n");
    cnt(head);
    printf("\n");
    search(3,head);
    printf("\n");
    delbtw(head,3);
    display(head);

}