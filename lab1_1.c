#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n],large=0;
    printf("enter the numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    printf("the largest numbers is:%d",large);

}