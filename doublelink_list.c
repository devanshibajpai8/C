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
    while(head!=NULL)
    {
    printf("\n%d\n",head->data);
    head=head->next;
    }

}
void displaybackwards(struct node *head)
{
   struct node *p=head;
   while(p->next!=NULL)
   {
       p=p->next;
   }
   while(p!=NULL)
   {
       printf("\n%d\n",p->data);
       p=p->prev;
   }
}
struct node *insertatstart(struct node *head,int data)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    head->prev=ptr;
    ptr->prev=NULL;
    ptr->next=head;
    return ptr;
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
struct node *deleteatstart(struct node *head)
{
    head=head->next;
    head->next->prev=NULL;
    return head;
}
struct node *deleteatindex(struct node *head,int index)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node *));
    struct node *p=head;
    int i=0;
    while(i!=index)
    {
        p=p->next;
        i++;
    }
    p->next->prev=p->prev;
    p->prev->next=p->next;
    return head;
}
struct node *search(int item,struct node *head)
{
    struct node *p=head;
    while(p->data!=item)
    {
        p=p->next;
    }
    printf("\n%d\n",p->data);

}
struct node *deleteatnode(struct node *head,struct node *p)
{
   
    p->next->prev=p->prev;
    p->prev->next=p->next;
    return head;
}
void cnt(struct node *head)
{
    struct node *r=head;
    int count=1;
    while(r->next!=NULL)
    {
        count++;
        r=r->next;
    }
    printf("%d",count);

}
void empty(struct node *head)
{
    if(head->next=NULL)
    {
        printf("list is empty");
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
    fourth->data=2;
    fourth->prev=third;
    fourth->next=NULL;
    last->next=fourth;
    display(head);
    printf("\n");
    head=insertatstart(head,65);
    display(head);
    insertatbtw(head,8,2);
    display(head);
    printf("\n");
    deleteatindex(head,2);
    display(head);
    printf("\n");
    head=deleteatstart(head);
    display(head);
    printf("\n");
    search(2,head);
    printf("\n");
    deleteatnode(head,third);
    display(head);
    printf("\n");
    displaybackwards(head);
    cnt(head);
  

}