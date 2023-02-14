#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[n],l,u,t;
    printf("enter no. of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                d=a[i];
                a[i]=a[j];
                a[j]=d;

            }

        }
    }
    printf("enter lower and upper limits:");
    scanf("%d %d",&l,&u);
    for(int i=0;i<n;i++)
    {
        if(a[i]>=l&&a[i]<=u)
        {
            t++;
        printf("\nthe elements are:%d",a[i]);
        }
    }
    printf("\nno. of elements are:%d",t);
  
}
