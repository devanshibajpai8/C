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
void reverse(struct queue *q)
{
    
    while(q->b!=q->f)
    {
        printf("%d\n",q->arr[q->b]);
        q->b--;
    }
}
int main()
{
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->size=10;
    q->f=q->b=-1;
    q->arr=(int *)malloc(q->size * sizeof(int));
    int c,i,o;
    printf("-------------MENU----------\n1)isempty\n2)isfull\n3)enqueue\n4)reversing\n5)exit");
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
            reverse(q);
            break;

            case 5:
            exit(0);
            
            default:
            printf("wrong choice");
            break;

        }
    }
    
}