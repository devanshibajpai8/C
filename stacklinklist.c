#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top;
int isempty(struct node *top)
{
    if(top==NULL)
    {
        return 1;
    }
    else{
        return 0;

    }
}
int isfull(struct node *top)
{
    struct node *r=(struct node *)malloc(sizeof(struct node));
    if(r==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *push(struct node *top,int val)
{
    if(isfull(top))
    {
        printf("stack overflow");
    }
    else{
        
        struct node *n=(struct node *)malloc(sizeof(struct node));
        n->data=val;
        n->next=top;
        top=n;
        return top;
    }
}
void traversal(struct node *p)
{
    while(p!=NULL)
    {
        printf("elements:%d",p->data);
        p=p->next;
    }
}
void pop(struct node *top)
{
    if(isempty(top))
    {
        printf("stack underflow");
    }
    else
    {
        struct node *n=top;
        top=top->next;
        int x=n->data;
        free(n);
        printf("pooped value:%d",x);
    }
}


int main()
{
    int i,c;
    printf("-------------MENU----------\n1)isempty\n2)isfull\n3)push\n4)pop\n5)traversal\n6)exit");
    while(1)
    {
        printf("\nenter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            printf("%d",isempty(top));
            break;

            case 2:
            printf("%d",isfull(top));
            break;

            case 3:
            printf("enter the val:");
            scanf("%d",&i);
            top=push(top,i);
            break;
            
            case 4:
            pop(top);
            break;

            case 5:
            traversal(top);
            break;

            case 6:
            exit(0);
            
            default:
            printf("wrong choice");
            break;

        }
    }
}