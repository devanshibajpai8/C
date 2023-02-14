#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,a[n];
    int *p=(int *)malloc(n*sizeof(int));
    p=a;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
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
    printf("the second smaalest no. is %d",a[1]);
    printf("the second last largest no. is:%d",a[i-2]);
}