#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f;
    int b;
    int *arr;
};
int isempty(struct queue *q)
{
    if(q->f==q->b)
    return 1;
    else
    return 0;
}
int isfull(struct queue *q)
{
    if(q->b==q->size-1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q,int val)
{
    if(isfull(q))
    {
        printf("stack overflow");
    }
    else
    {
        q->b++;
        q->arr[q->b]=val;
    }
}
int dequeue(struct queue *q)
{
    int val=-1;
    if(isempty(q))
    {
        return 0;
    }
    else{
        q->f++;
        val=q->arr[q->f];
        printf("dequeued element:%d",val);
        return val;
    }
    
}
void display(struct queue *q)
{
    if(isempty(q))
    {
        printf("stack is empty");
    }
    else
    {
    while(q->b!=q->f)
    {
    printf("elements:%d",q->arr[q->f]);
    q->f++;
    }
    printf("elements:%d",q->arr[q->b]);
    }
 
}

int main()
{
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->size=20;
    q->f=q->b=-1;
    q->arr=(int *)malloc(q->size * sizeof(int));
    int c,i,o;
    printf("-------------MENU----------\n1)isempty\n2)isfull\n3)enqueue\n4)dequeue\n5)display\n6)exit");
    while(1)
    {
        printf("\nenter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            printf("%d",isempty(q));
            break;

            case 2:
            printf("%d",isfull(q));
            break;

            case 3:
            printf("enter the value:");
            scanf("%d",&i);
            enqueue(q,i);
            break;

            case 4:
            dequeue(q);
            break;

            case 5:
            q->f++;
            display(q);
            break;

            case 6:
            exit(0);
            
            default:
            printf("wrong choice");
            break;

        }
    }
    
}