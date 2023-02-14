#include<stdio.h>
#include<stdlib.h>
struct circ_queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(struct circ_queue *q)
{
    if(q->f==q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct circ_queue *q)
{
    if((q->r+1)%q->size==q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct circ_queue *q,int val)
{
    if(isfull(q))
    {
        printf("queue is full");
    }
    else
    {
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("enqueued element:%d\n",val);
    }
}
int dequeue(struct circ_queue *q)
{
    int a=-1;
    if(isempty(q))
    {
        printf("queue is empty");
    }
    else
    {
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    printf("dequeued element:%d",a);
    return a;
}
void traversal(struct circ_queue *q)
{
    if(isempty(q))
    {
        printf("stack is empty");
    }
    else
    {
        q->f++;
    while(q->r!=q->f)
    {
    printf("elements:%d\n",q->arr[q->f]);
    q->f++;
    }
    printf("elements:%d\n",q->arr[q->r]);
    }
 
}
int main()
{
    struct circ_queue *q=(struct circ_queue *)malloc(sizeof(struct circ_queue));
    q->size=10;
    q->f=q->r=0;
    q->arr=(int *)malloc(q->size*sizeof(int));
    int c,i,o;
    printf("-------------MENU----------\n1)isempty\n2)isfull\n3)enqueue\n4)dequeue\n5)traversal\n6)exit");
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
            printf("enter the val:");
            scanf("%d",&i);
            enqueue(q,i);
            break;

            case 4:
            dequeue(q);
            break;

            case 5:
            traversal(q);
            break;

            case 6:
            exit(0);
            
            default:
            printf("wrong choice");
            break;

        }
    }
    
}