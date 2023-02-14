#include<stdio.h>
int main()
{
    int i,deg1,deg2,j,co[deg1],coe[deg2],sum[j];
    printf("enter the highest degree of polynomial 1:");
    scanf("%d",&deg1);
    
    for(i=0;i<=deg1;i++)
    {
        printf("enter the coefficient of x^%d:",i);
        scanf("%d",&co[i]);
    }
    printf("polynomial:");
    for(i=0;i<=deg1;i++)
    {
        printf(" %d x^%d",co[i],i);
    }
    printf("\nenter the highest degree of polynomial 2:");
    scanf("%d",&deg2);
    
    for(i=0;i<=deg2;i++)
    {
        printf("enter the coefficient of x^%d:",i);
        scanf("%d",&coe[i]);
    }
    printf("polynomial:");
    for(i=0;i<=deg2;i++)
    {
        printf(" %d x^%d",coe[i],i);
    }
    if(deg1>deg2)
    {
        deg1=j;
    }
    else
    deg2=j;
    if(deg2>=deg1)
    {
        for(i=0;i<=deg1;i++)
        {
        sum[i]=co[i];
        }
    }
    else
    {
        for(i=0;i<=deg2;i++)
        {
        sum[i]=coe[i];
        }
    }
    
    if(deg2>deg1)
    {
        for(i=0;i<=deg2;i++)
        {
            sum[i]=co[i]+coe[i];
        }
    }
    else
    {
        for(i=0;i<=deg1;i++)
        {
            sum[i]=co[i]+coe[i];
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%dx^%d",sum[i],i);
    }
}
