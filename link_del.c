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
struct node *deleteatbtw(struct node *head,int index)
{
    struct node *ptr=head;
    struct node *q=head->next;
    for(int i=0;i<index-1;i++)
    {
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=q->next;
    free(q);
    return head;
}
struct node *deleteatstart(struct node *head)
{
    struct node *ptr=head;
    head=head->next;
    free(ptr);
   
    return head;
}
struct node *deleteatend(struct node *head)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
struct node *deletevalue(struct node *head,int value)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    return head;

}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    fifth=(struct node *)malloc(sizeof(struct node));
    head->data=6;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=2;
    third->next=fourth;
    fourth->data=5;
    fourth->next=fifth;
    fifth->data=3;
    fifth->next=NULL;
    display(head);
    printf("\n");
     head=deleteatstart(head);
    display(head);
    printf("\n");
    deleteatbtw(head,1);
    display(head);
    printf("\n");
    deleteatend(head);
    display(head);
    printf("\n");
    deletevalue(head,5);
    display(head);
    return 0;
}