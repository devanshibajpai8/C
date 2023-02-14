#include<stdio.h>
int sumofarr(int a[],int i,int l)
{
    static int sum=0;
    sum=sum+a[i];
    if(i>=l-1)
    {
        return sum;

    }
 return sumofarr(a,i+1,l);
}
void main()
{
    int i,n,a[20];
    printf("enter the elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sum of elements:%d",sumofarr(a,0,n));
}