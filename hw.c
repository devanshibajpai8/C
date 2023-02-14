#include<stdio.h>
int main()
{
    int n,m,j,i;
    int a[n],b[m];
    printf("enter the order of first polynomial:");
    scanf("%d",&n);
    printf("enter the coefficients:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the order of second polynomial:");
    scanf("%d",&m);
    printf("enter the coefficients:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    
    if(m>n)
    j=m;
    else 
    j=n;
    int sum[j];
    for (int i = 0; i<n; i++)
     sum[i] = a[i];
 
   
   for (int i=0; i<m; i++)
       sum[i] += b[i];
 
   

    if(n>m)
    {
        for(i=0;i<n;i++)
        {
        
        sum[i]=sum[i]+b[i];
        }
    }
    else
    {
    
    for(i=0;i<j;i++)
    {
        sum[i]=sum[i]+a[i];
    }
    }
    for(i=0;i<j;i++)
    {
    printf("  %dx^%d",sum[i],i);
    }
}



    


    

