#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n],item;
    printf("enter 5 numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be serached:");
    scanf("%d",&item);
    for(int i=0;i<n;i++)
    {
        if(a[i]=item)
        {
            printf("item %d is presnt",item);
            break;
        }
    }
    

}