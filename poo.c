#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,deg1,deg2,m=0;
    printf("enter the highest degree of polynomial 1:");
    scanf("%d",&deg1);
    int  co[deg1];
    for(i=0;i<=deg1;i++)
    {
        printf("enter the coefficient of x^%d:",i);
        scanf("%d",&co[i]);
    }
    printf("polynomial:");
    for(i=0;i<=deg1;i++)
    {
        printf(" %dx^%d ",co[i],i);
    }
    printf("\nenter the highest degree of polynomial 2:");
    scanf("%d",&deg2);
    int coe[deg2];
    for(i=0;i<=deg2;i++)
    {
        printf("enter the coefficient of x^%d:",i);
        scanf("%d",&coe[i]);
    }
    printf("polynomial:");
    for(i=0;i<=deg2;i++)
    {
        printf(" %dx^%d ",coe[i],i);
    }
    int ex[deg1],ex1[deg2],sum[deg1+deg2],sum1[deg1+deg2];
     for(i=0;i<=deg1;i++)
    {
       ex[i]=i;
    }
    for(i=0;i<=deg2;i++)
    {
       ex1[i]=i;
    }
    if(deg1>deg2)
    {
        for(i=0;i<=deg2;i++)
        {
        sum[m]=co[i]+coe[i];
        sum1[m]=ex[i];
        m++;
        }
        for(i=deg2+1;i<=deg1;i++)
		 {
        sum[m]=co[i];
        sum1[m]=ex[i];
        m++;
         }
    }
    else
    {
        for(i=0;i<=deg1;i++)
        {
        sum[m]=co[i]+coe[i];
        sum1[m]=ex[i];
        m++;
        }
        for(i=deg1+1;i<=deg2;i++)
		 {
        sum[m]=coe[i];
        sum1[m]=ex1[i];
        m++;
         }
    }
     printf("\nExpression after addition:");
    for(i=0;i<m;i++)
    {
        printf("%dx^%d  ",sum[i],sum1[i]);
    }
    return 0;
}