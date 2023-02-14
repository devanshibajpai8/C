#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
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
}
void push(struct stack *p,char val)
{
    
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
char pop(struct stack *p)
{
    if(isempty(p))
    {
        printf("stack underflow");
    }
    else
    {
        char val=p->arr[p->top];
        p->top--;
        return val;
    }
    
}
int parenthesis(char *exp)
{
    struct stack *sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size * sizeof(char ));
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
        push(sp,'(');
        }
        else if(exp[i]==')') 
        {
            if(isempty(sp))
            {
            return 0;
            }
            else{
            pop(sp);
            }
        }
    }
    if(isempty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char *exp="9+(99)";
    if(parenthesis(exp))
    {
        printf("parenthesis match");
    }
    else{
        printf("parenthesis donot match");
    }
    return 0;
}