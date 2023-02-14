#include<stdio.h>
int main()
{
    int a[5],item,temp;
    printf("enter 5 numbers:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
    }
    printf("array is:");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}