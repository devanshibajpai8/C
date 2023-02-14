#include<stdio.h>
#include<stdlib.h>
void fun(int **s,int m,int n)
{
    int i,j,count=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
             if(s[i][j]!=0)
            {
            count++;
            }

        }

    }
    printf("no. of non zero elements are:%d",count);
}
void sum_up(int **p,int m,int n)
{
    int i,j,sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            sum+=p[i][j];
        }
    }
    printf("the sum:%d",sum);
}
void sum_down(int **q,int m,int n)
{
    int i,j;
    printf("\nelements below minor diagonal:");
     for(i=0;i<m;i++)
    {
        for(j=n-i;j<n;j++)
        {
            
        printf("\t%d",q[i][j]);
        }
        printf("\n");
        
    }
   
}
void mul(int **r,int m,int n)
{
    int i,j,multiply=1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        if(i==j)
            multiply=(multiply) * (r[i][j]);
        }
    }
    printf("\nmultiplication of diagonal elements:%d",multiply);
}
void trans(int **t,int m,int n)
{
    int i,j;
    printf("\ntranspose:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",t[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int i,j,m,n,count=0;
     int ** a= (int**)malloc(sizeof(int*)*m);
    for(int i=0; i<n; i++)
        *(a+i) = (int*)malloc(sizeof(int)*n);
    printf("enter no. of elements to be entered:");
    scanf("%d %d",&m,&n);
    printf("enter the elements:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    fun(a,m,n);
    printf("\n");
    sum_up(a,m,n);
    sum_down(a,m,n);
    mul(a,m,n);
    trans(a,m,n);
    return 0;
}
