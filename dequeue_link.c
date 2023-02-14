#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue *next;
};

struct queue *f;
struct queue *r;

int isempty()
{
    if(f==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull()
{
    struct queue *p=(struct queue *)malloc(sizeof(struct queue));
    if(p==NULL)
    {
          return 1;
    }
    else
    {
        return 0;
    }
}


void enqueue(int val)
{ 
    struct queue *n=(struct queue *)malloc(sizeof(struct queue));
    if(n==NULL)
    {
        printf("queue is full");
    }
    else
    {
        n->data=val;
        n->next=NULL;
    if(f==NULL)
    {
        f=r=n;
    }
    else
    {
        r->next=n;
        r=n;
    }
}
}

int dequeue()
{
    int val=-1;
    struct queue *p=f;
    if(p==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        val=p->data;
        f=f->next;
        free(p);
    }
    printf("dequeued element:%d",val);
    return val;
}
void traversal()
{
    struct queue *q;
    q=f;
    if(f==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        while(q!=NULL)
        {
        printf("elements:%d",q->data);
        q=q->next;
        }
    }

}


int main()
{
    int i,c;
    printf("-------------MENU----------\n1)isempty\n2)isfull\n3)enqueue\n4)dequeue\n5)traversal\n6)exit");
    while(1)
    {
        printf("\nenter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            printf("%d",isempty());
            break;

            case 2:
            printf("%d",isfull());
            break;

            case 3:
            printf("enter the val:");
            scanf("%d",&i);
            enqueue(i);
            break;
            
            case 4:
            dequeue();
            break;

            case 5:
            traversal();
            break;

            case 6:
            exit(0);
            
            default:
            printf("wrong choice");
            break;

        }
    }
}