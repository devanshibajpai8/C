#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue *next;
};

struct queue *f;
struct queue *r;

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
    printf("-------------MENU----------\n1)enqueu\n2)dequeue\n3)traversal\n4)exit");
    while(1)
    {
        printf("\nenter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            printf("enter the val:");
            scanf("%d",&i);
            enqueue(i);
            break;
            
            case 2:
            dequeue();
            break;

            case 3:
            traversal();
            break;

            case 4:
            exit(0);
            
            default:
            printf("wrong choice");
            break;

        }
    }
}