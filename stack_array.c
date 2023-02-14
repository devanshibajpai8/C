#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *p)
{
    if(p->top==-1)
    {
    return 1;
    }
    else
    {
    return 0;
    }
}
int isfull(struct stack *p)
{
    if(p->top==p->size-1)
    {
    return 1;
    }
    else
    {
    return 0;
    }

    return 0;
}
void push(struct stack *p,int val)
{
    printf("enter the value:");
    scanf("%d",&val);
    if(isfull(p))
    {
        printf("stack overflow\n");
    }
    else
    {
    p->top++;
    p->arr[p->top]=val;
    }
}
int pop(struct stack *p)
{
    int val;
    if(isempty(p))
    {
        printf("stack underflow");
    }
    else
    {
        int val=p->arr[p->top];
        p->top--;
        printf("the pooped value is:%d",val);
    }
    
}
int display(struct stack *p)
{
    if(isempty(p))
    {
        printf("stack is empty");
    }
    else
    {
        while(p->top!=-1)
        {
    printf("%d ",p->arr[p->top]);
       p->top--;
        }
    }
    

}
void peek(struct stack *p)
{
    if(p->top==-1)
    {
        printf("stack empty");
    }
    else
    printf("the top element is:%d",p->arr[p->top]);
}
int main()
{
    struct stack *s=(struct stack *)malloc(sizeof(struct stack *));
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    int c,i,o;
    printf("-------------MENU----------\n1)push\n2)pop\n3)empty\n4)isfull\n5)peek\n6)display\n7)exit");
    while(1)
    {
        printf("\nenter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            push(s,i);
            break;

            case 2:
            pop(s);
            
            break;

            case 3:
            printf("%d",isempty(s));
            break;

            case 4:
            printf("%d",isfull(s));
            break;

            case 5:
            peek(s);
            break;

            case 6:
            display(s);

            case 7:
            exit(0);
            
            default:
            printf("wrong choice");
            break;

        }
    }
}