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
    return a;
}
int main()
{
    struct circ_queue *q=(struct circ_queue *)malloc(sizeof(struct circ_queue));
    q->size=4;
    q->f=q->r=0;
    q->arr=(int *)malloc(q->size*sizeof(int));
    printf("empty(1)or not(0):%d\n",isempty(q));
    printf("full(1)or not(0):%d\n",isfull(q));
    enqueue(q,6);
    enqueue(q,7);
    enqueue(q,2);
    printf("full(1)or not(0):%d\n",isfull(q));
    printf("dequeued element:%d\n",dequeue(q));
    printf("dequeued element:%d\n",dequeue(q));
    printf("dequeued element:%d\n",dequeue(q));
    enqueue(q,5);
    enqueue(q,6);
    
}