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
    int a,b;
    printf("enter the values of a,b:");
    scanf("%d %d ",&a,&b);
    swap(&a,&b);
    printf("numbers after swapping:");
    printf("%d %d",a,b);
}