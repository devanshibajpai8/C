#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a,b,c;
    printf("enter the values of a,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    swap(&a,&b);
    swap(&c,&a);
    printf("numbers after swapping:");
    printf("%d %d %d",a,b,c);
}