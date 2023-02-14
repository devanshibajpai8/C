#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{ 
int coeft;
int degree;
struct node *link;
};
typedef struct node poly;
int main()
{
poly *root,*temp,*new;
int hdegree, coeft;
root==NULL;

printf("Enter the highest degree of polynomial:");
scanf("%d",&hdegree);
while(hdegree>=0)
{
printf("Enter coefficient of variable with degree %d:",hdegree);
scanf("%d",&coeft);
if(coeft!=0)
{
new=(poly*)malloc(sizeof(poly));
if(new==NULL)
{
printf("Memory allocation error…"); exit(0);
}
new->coeft=coeft;
new->degree=hdegree;
new->link=NULL;
if(root==NULL)
{
root=new;
temp=root;
}
else
{
temp->link=new;
temp=new;
}
}
hdegree--;
}

printf("\n The Polynomial is:\n\n");
temp=root;
while(temp!=NULL)
{
if(temp->coeft>0)
 printf("%dx^%d +",temp->coeft,temp->degree);
else
  printf("%dx%d",temp->coeft,temp->degree);
temp=temp->link;
}
 getch();
}