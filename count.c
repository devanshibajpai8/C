#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev,*next;
};
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
    cnt(head);
}