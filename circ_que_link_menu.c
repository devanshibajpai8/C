#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
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
    if(r==f)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void enqueue(int val)
{
    struct queue *p=(struct queue *)malloc(sizeof(struct queue));
    if(p==NULL)
    {
        printf("queue is full");
    }
    else
    {
        p->data=val;
        p->next=NULL;
        if(f==NULL)
        {
            f=r=p;
        }
        {
            r->next=p;
            r=p;
            r->next=f;
        }
    }
}

int dequeue()
{
    struct queue *d;
        d=f;
    int val=-1;
    if(d==NULL)
    {
        printf("queue is empty");
    }
    else if(f==r)
    {
        printf("element deleted:%d",f->data);
        f=r=NULL;
    }
    else
    {
        r->next=f;
        val=d->data;
        f=f->next;
        free(d);
    }
    printf("dequeue element:%d",val);
    return val;
}
void traversal()
{
    struct queue *q;
    if(f==NULL)
    {
        printf("queue is empty");
    }
    else
    {
    while(f->next!=r->next)
    {
    printf("element:%d\n",f->data);
    f=f->next;
    }
    printf("element:%d\n",f->data);
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