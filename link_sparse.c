#include<stdio.h>
#include<stdlib.h>
struct node
{
    int row;
    int col;
    int val;
    struct node *next;
};
void create_node(struct node **head,int v,int r,int c)
{
    struct node *p,*t;
    p=*head;
    if(p==NULL)
    {
        p=(struct node *)malloc(sizeof(struct node )); 
        p->row=r;
        p->col=c;
        p->val=v;
        p->next=NULL;
        *head=p;
    }
    else
    {
        while(p->next!=NULL)
        p=p->next;
        t=(struct node *)malloc(sizeof(struct node ));        
        t->val=v;
        t->row=r;
        t->col=c;
        t->next=NULL;
        p->next=t;
    }

}
void printlist(struct node *head)
{
    struct node *p,*t,*s;
    p =t =s = head;
 
    printf("row: ");
    while(p != NULL)
    {
 
        printf("%d ", p->row);
        p=p->next;
    }
    printf("\n");
 
    printf("column: ");
    while(t!= NULL)
    {
        printf("%d ", t->col);
        t = t->next;
    }
    printf("\n");
    printf("Value: ");
    while(s != NULL)
    {
        printf("%d ", s->val);
        s = s->next;
    }
    printf("\n");
}
int main()
{
    struct node *head=NULL;
    int sparse_matrix[3][4];
    printf("enter the matrix:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&sparse_matrix[i][j]);

        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(sparse_matrix[i][j]!=0)
            create_node(&head,sparse_matrix[i][j],i,j);

        }
    }
    printlist(head);

    return 0;
}