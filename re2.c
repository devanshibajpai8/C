#include<stdio.h>
void rotation(int *a,int *b,int *c)
{
    int d;
     d=*b;
    *b=*a;
    *a=*c;
    *c=d;
}
void main()
{
    int a,b,c;
    printf("enter the values of a,b and c:");
    scanf("%d %d %d",&a,&b,&c);

    printf("values before rotation:");
    printf("%d %d %d",a,b,c);

    rotation(&a,&b,&c);

    printf("\nvalues after rotation:");
    printf("%d %d %d",a,b,c);

}
